#include <stdio.h>
#include <stdlib.h>

struct stackNode
{
    int data;
    struct stackNode *nextptr;
};
typedef  struct stackNode StackNode;
typedef StackNode *StackNodePtr;

char push (StackNodePtr *topPtr , char item)
{
    StackNodePtr newPtr;
    newPtr = malloc(sizeof(StackNode));
    if(newPtr!=NULL)
    {
        newPtr->data    = item;
        newPtr->nextptr = *topPtr;
        *topPtr         = newPtr;
    }
}
int isEmpty( StackNodePtr topPtr )
{
    return topPtr==NULL;
}
int pop( StackNodePtr *topPtr )
{
    StackNodePtr tempPtr;
    int popValue;

    tempPtr   = *topPtr;
    popValue  = (*topPtr)->data;
    *topPtr   = (*topPtr)->nextptr;
    free( tempPtr );

    return popValue;
}


int main()
{
    StackNodePtr stackPtr = NULL;
    char name[6];
         int j;
    printf("Enter a line of text: ");
  // fgets(name,5,stdin);
    gets(name);
    int i=0;
    while(name[i]!='\0') {
        push( &stackPtr, name[i]);
        i++;
    }
    while(!isEmpty( stackPtr ))
        printf("%c",pop( &stackPtr ) );
    printf("\n");
    return 0;
}


