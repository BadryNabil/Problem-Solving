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
int isPalindrome( StackNodePtr *stackPtr, const char* word )
{
    char c;
    int i = 0;

    while(!isEmpty( *stackPtr ))
    {
        c = pop( stackPtr );
        if(c!=word[i++])
            return 0;
    }

    if(word[i]!='\0')
        return 0;

    return 1;
}
int main()
{
    StackNodePtr stackPtr = NULL;
    char name[6],c;
    printf("Enter a line of text: ");
    gets(name);
    int i=0;
    while(name[i]!='\0') {
        push( &stackPtr, name[i]);
        i++;
    }

    if( isPalindrome( &stackPtr, name )==1 )
        printf(" The Char is a Palindrome\n");
    else
    printf(" The Char is NOT a Palindrome\n");
    return 0;
}
