#include <stdio.h>
#include <stdlib.h>

struct queueNode
{
    char data;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

int  enqueue(QueueNodePtr *headPtr , QueueNodePtr *tailPtr , char item );
int  dequeue(QueueNodePtr *headPtr ,  QueueNodePtr *tailPtr  );
int isEmpty(QueueNodePtr headPtr );
void instractions();

int main()
{
    QueueNodePtr headPtr = NULL;
    QueueNodePtr tailPtr = NULL;
    int choice ;
    char item;
    instractions();
    scanf("%d",&choice);
    while(choice!=3)
    {
        switch(choice)
        {
          case 1:
           printf( "%s", "Enter a character: " );
           scanf( "\n%c", &item );
           enqueue(&headPtr , &tailPtr , item);
           printQueue( headPtr );
           break;
           case 2:
           if(!isEmpty(headPtr))
           {
             dequeue(&headPtr , &tailPtr );
           }
           printQueue( headPtr );
           break;
           default:
           puts( "Invalid choice.\n" );
           instractions();
           break;
        }
        printf( "%s", "? " );
        scanf( "%u", &choice );
    }
    return 0;
}
void instractions()
{
    puts( "Enter choice:\n"
          "1 to push a value on the stack\n"
          "2 to pop a value off the stack\n"
          "3 to end program" );
}
int  enqueue(QueueNodePtr *headPtr , QueueNodePtr *tailPtr , char item )
{
    QueueNodePtr newPtr;
    newPtr = malloc(sizeof(QueueNode));
    if(newPtr!= NULL)
    {
        newPtr->data    = item;
        newPtr->nextPtr = NULL;
        if(isEmpty(*headPtr))
        {
            *headPtr = newPtr;
        }
        else
        {
            (*tailPtr)->nextPtr = newPtr;
        }
        *tailPtr = newPtr;
    }
     else {
            printf( "not inserted. No memory available.\n" );
     }
}

int  dequeue(QueueNodePtr *headPtr ,  QueueNodePtr *tailPtr  )
{
   char value;
   QueueNodePtr tempPtr;
   value    = (*headPtr)->data;
   tempPtr  = *headPtr;
   *headPtr = (*headPtr)->nextPtr;

    if(*headPtr==NULL)
    {
        *tailPtr == NULL;
    }
    free(tempPtr);
}


int isEmpty(QueueNodePtr headPtr )
{
    return headPtr==NULL;
}
int printQueue( QueueNodePtr currentPtr )
{
    if(currentPtr == NULL)
    {
        puts( "Queue is empty.\n" );
    }
    else
    {
         puts( "The queue is:" );
         while(currentPtr != NULL)
         {
             printf("%c -->",currentPtr->data);
             currentPtr = currentPtr->nextPtr;

         }
         puts( "NULL\n" );

    }

}


