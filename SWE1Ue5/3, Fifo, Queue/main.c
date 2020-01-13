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
int size(void);
void empty();
void length();
void reset();
int main()
{

    front = rear = -1;
    do
    {
        printf("1. Insert\t2. Delete\n3. Display\t4. Size\n5. Is empty?\t6. Length\n7. Reset\t8. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                fifo_in();
                break;
            case 2:
                fifo_out();
                break;
            case 3:
                display();
                break;
            case 4:
                size();
                break;
            case 5:
                empty();
                break;
            case 6:
                length();
                break;
            case 7:
                reset();
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
        printf("Enter the element to add to the queue: ");
        scanf("%d", &element);
        rear++;
        i++;
        queue[rear] = element;
    }
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
int size(void){
    printf("The max length of the Queue is: %d\n", len);
}
void empty(){
    if(i<0)
        printf("The Queue is empty!\n");
    else{
        printf("The Queue is not empty!\n");
    }
}
void length(){
    printf("The number of the elements in the Queue is: %d\n", i+1);
}
void reset(){
    rear = -1;
    i=-1;
}
