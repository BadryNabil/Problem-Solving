#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void copyString(  );

int main()
{
    char string1[SIZE];
    char string2[]="lll";
    char string3[SIZE];
    char string4[SIZE];
    copyString(string1,string2);
     printf( "string1 = %s\n", string1 );
    return 0;
}
void copyString( char *s1,  char *s2 ){
    int i;
    for(i=0 ; (*s1=*s2) !='\0';++s1,++s2)
    {
;
    }
}
