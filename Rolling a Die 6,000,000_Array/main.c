#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main()
{
    int roll,freq[SIZE],face;
    srand(time(NULL));
    for(roll=0 ;roll<=6000000;roll++)
    {
        face=1+rand()%6;
        freq[face]++;
    }
    printf("%s%14s\n","face" , "freq");
    for(face=1 ; face<SIZE;face++)
    {
        printf("%4d%14d\n",face ,freq[face]);
    }
    return 0;
}
