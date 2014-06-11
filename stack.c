#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 
void pop(int stackArray[]);
void push(int stackArray[]);
bool emptyStack(void);
bool fullstack(void);
 
int tos=0;
int stackSize = 100;
 
void main (void)
{
    char op = 'u';
    int stackArray[stackSize];
 
    while(1)
    {
        printf("Enter the needed op-code (o for pop and u for push and q for exit):\n");
        scanf("%c", &op);
        switch (op)
        {
            case 'u':
            push(stackArray);
            break;
            case 'o':
            pop(stackArray);
            break;
            case 'q':
            exit(0);
            break;
            default:
            ;
         
 
        }
    }
    return;
}
 
void pop(int *stackArray)
{
    if(!emptyStack())
    {
        printf("Element is: %d\n", stackArray[--tos]);
    }
    else printf("Stack is Empty !\n");
    return;
 
}
 
void push(int *stackArray)
{
    if(!fullstack())
    {
        printf("Enter the element:\n");
        scanf("%d", stackArray+tos++);
    }
    else printf("Stack is Full !\n");
    return;
}
 
bool emptyStack()
{
    if(tos == 0) return true;
    else return false;
}
 
bool fullstack()
{
    if(tos == stackSize) return true;
    else return false;
}
