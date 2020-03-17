/*---------------------------------------------*\
| File: Queue                                   |
| Date: 01.12.2019                              |
| progtimeest: 40min                            |
| progtimereal: 60min                           |
| author: Peter Varga                           |
| e-mail: pvarga.its-b2019@fh-salzburg.ac.at    |
| Salzburg University of Applied Sciences       |
| Information Technology & Systems Managment    |
| SWE1 - ILV05, exercise 3.                     |
\*---------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#define len 10

int queue[len];
int front, rear;
int i=-1;
int choice;
void fifo_in();
void fifo_out();
void display();
void buy();
void take();
int num = 0;
int main()
{

    front = rear = -1;
    do
    {
        printf("1. Buy\t2. Take\n 3.Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                buy();
                break;
            case 2:
                take();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice!=8);

    return 0;
}
void fifo_in()
{
    int element;
    if (rear == len - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == - 1)
            front = 0;

        rear++;
        i++;
        queue[rear] = num;
    }
    printf("Waitinglist\n");
    for (i = front; i <= rear; i++)
        printf("%d, ", queue[i]);

}
void fifo_out()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("The deleted element in the queue is: %d\n", queue[front]);
        front++;
        i--;
    }
}
void display() {
    int i;
    if (front == -1) {
        printf("Queue underflow\n");
    } else {
        printf("The elements of the queue are:\n");
        for (i = front; i <= rear; i++)
            printf("%d, ", queue[i]);
    }
    printf("\n");
}

}
void buy(){
    num++;
    fifo_in(num);
}
void take(){
    num--;
    fifo_out(num);
}
void reset(){
    rear = -1;
    i=-1;
}
