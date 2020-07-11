#include <stdio.h>

int main( void )
{   /* long amount, principal = 100000, rate = 5;
     unsigned int year;
     printf( "%4s%21s\n", "Year", "Amount on deposit" );
     for ( year = 1; year <= 10; ++year )
         {
            amount = principal * pow( 1 + rate, year );
            printf( "%4u%21.2d\n", year, amount );
        }*/

    int year;
    long amount, principal = 100000, rate = 5;
    long modifier;
    long r = rate+100;
    int count;

    printf( "%4s%21s\n", "Year", "Amount on deposit" );

    for(year = 1; year <= 10; year++ )
    {
        modifier = r;
        for(count=1; count<year; count++) {
            modifier*=r;
            modifier/=100;
        }
        printf("modifier = %d\n", modifier );
       //  amount = principal * pow(1 + rate,year);
       // amount = (principal * modifier)/100;
        //printf( "%4d%21d\n", year, amount );
    }
}
