#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct treeNode
{
    struct treeNode *leftPtr;
    int data;
    struct treeNode *rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;


int main()
{
    int i,item;
    TreeNodePtr rootPtr = NULL;
    srand(time(NULL));
    puts( "The numbers being placed in the tree are:" );
    for(i=1 ; i<=10 ; i++)
    {
        item = rand()%15;
        printf("%3d", item);
        insert(&rootPtr, item);
    }
    puts( "\n\nThe INOrder traversal is:" );
    inOrder(rootPtr);
    puts( "\n\nThe preOrder traversal is:" );
    preOrder(rootPtr);
    puts( "\n\nThe postOrder  traversal is:" );
    postOrder(rootPtr);
    return 0;
}

int insert (TreeNodePtr *treePtr, int item)
{
    if(*treePtr == NULL)
    {
        *treePtr = malloc(sizeof(TreeNode));
        if(*treePtr!=NULL)
        {
            (*treePtr)->data     = item;
            (*treePtr)->leftPtr  = NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else
        {
            printf( "%d not inserted. No memory available.\n", item );
        }
    }
    else
    {
        if(item < ((*treePtr)->data))
        {
            insert(&((*treePtr)->leftPtr), item);
        }
        else if(item > ((*treePtr)->data))
        {
            insert(&((*treePtr)->rightPtr), item);
        }
        else
        {
            printf( "%s", "dup" );
        }
    }
}
int inOrder(TreeNodePtr treePtr)
{
    if ( treePtr != NULL )
    {
       inOrder(treePtr->leftPtr);
       printf( "%3d", treePtr->data );
       inOrder(treePtr->rightPtr);
    }

}
int preOrder(TreeNodePtr treePtr)
{
    if ( treePtr != NULL )
    {
       printf( "%3d", treePtr->data );
       preOrder(treePtr->leftPtr);
       preOrder(treePtr->rightPtr);
    }

}
int postOrder(TreeNodePtr treePtr)
{
    if ( treePtr != NULL )
    {
       postOrder(treePtr->leftPtr);
       postOrder(treePtr->rightPtr);
       printf( "%3d", treePtr->data );

    }

}

