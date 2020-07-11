#include <stdio.h>
#include <stdlib.h>
struct stackNode
{
    int data;
    struct stackNode *nextptr;
};
typedef  struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void instractions();
int printStack(StackNodePtr currentPtr);
int push(StackNodePtr *topPtr , int value);
int pop(StackNodePtr *topPtr);
int isEmpty( StackNodePtr topPtr );

int main()
{
    StackNodePtr stackPtr= NULL;
    int choice,value;
    instractions();
    scanf("%d",&choice);
    while(choice != 3)
    {
        switch(choice)
        {
        case 1:
            printf( "%s", "Enter an integer: " );
            scanf("%d",&value);
            push(&stackPtr,value);
            printStack( stackPtr );
            break;
        case 2:
            if(!isEmpty(stackPtr))
            {
              printf( "The popped value is %d.\n",pop(&stackPtr));
            }
            printStack( stackPtr );
            break;
        default:
            printf( "%s", "InvalidChoice: " );
            instractions();
            break;
        }
        printf( "%s", "? " );
        scanf( "%u", &choice );
    }
    printf("Hello world!\n");
    return 0;
}
void instractions()
{
    puts( "Enter choice:\n"
          "1 to push a value on the stack\n"
          "2 to pop a value off the stack\n"
          "3 to end program" );

}
int printStack(StackNodePtr currentPtr)
{
    if(currentPtr==NULL)
    {
        puts( "The stack is empty.\n" );
    }
    else
    {
         puts( "The stack is \n" );
         while(currentPtr!=NULL)
         {
            printf( "%d --> ", currentPtr->data);
           currentPtr= currentPtr->nextptr;
         }
    }
    puts("NULL\n");
}
int push(StackNodePtr *topPtr , int value)
{
    StackNodePtr newPtr;
    newPtr = malloc(sizeof(StackNode));
    if(newPtr!=NULL)
    {
        newPtr->data    = value;
        newPtr->nextptr = *topPtr;
        *topPtr          = newPtr;
    }
     else {
            printf( "%d not inserted. No memory available.\n", value );
     }
}
int pop(StackNodePtr *topPtr)
{
    StackNodePtr tempPtr;
    int popValue;
    tempPtr  = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr  = (*topPtr)->nextptr;
    free(tempPtr);
    return popValue;
}
int isEmpty( StackNodePtr topPtr )
{
       return topPtr == NULL;
}

