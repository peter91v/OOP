#include <stdio.h>
#include <stdlib.h>
#define len 10

int stack[len];
int top;
int i;
int choice;
void push();
void pop();
void display();
void tops();
void empty();
void size();
void length();
void reset();


int main()
{
    top = -1;
    do
    {
        printf("1. Insert\t2. Delete\n3. Display\t4. Top\n5. Is empty?\t6. Size\n7. Length\t8. reset\n9. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                tops();
                break;
            case 5:
                empty();
                break;
            case 6:
                size();
                break;
            case 7:
                length();
                break;

            case 8:
                reset();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while(choice!=9);
    return 0;
}

void push(){

    int element;
    if(top == len-1){
        printf("Stack overflow!\n");
    }
        else
            {
            printf("Add an element to the Stack:\n");
            scanf("%d", &element);
            top++;
            stack[top]=element;
        }
}
void pop(){
    int element;
    if(top == -1)
    {
        printf("Stack is empty!\n");
    }
        else
            {
            element=stack[top];
            printf("Element was deleted: %d\n", stack[top]);
            top--;
        }
    }
void display() {

    if (top == -1) {
        printf("Stack is empty\n");
    }
    else if (top > 0)
    {
        printf("The elements of the stack are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d, ", stack[i]);

        }
        printf("\n");
    }
}
void tops(){
    printf("The least element of the stack: %d\n", stack[top]);
}
void length(){
    printf("The elements in the stack: %d\n", top+1);

}
void empty(){
    if(top>-1){
        printf("The stack is not empty!\n");}
        else
            {
            printf("The stack is empty!\n");
    }
}
void size(){
    printf("The max length of the stack is: %d\n", len);
}
void reset(){
    top=-1;
}