/*#include <stdio.h>
#include <stdlib.h>

float calculateCharges(float hour)
{
   float charge= 2.00;
    if (hour > 3.0 && hour<6.0)
    {
        charge +=0.50;
    }
    else if (hour ==24.00)
    {
        charge +=8.00;
    }
    return charge;

}
int main()
{
    int i;
    float hour;
    for(i=0 ; i<3 ; i++)
    {
      scanf("%f",&hour);
      printf("%0.2f\n",calculateCharges(hour));
    }

    return 0;
}*/


#include <stdio.h>
#include <math.h>

float calculateCharges( float );


int main()
{
    float hours1, hours2, hours3;
    float charges1, charges2, charges3;
    float totalHours=0.0, totalCharges=0.0;

    printf("Enter the hours parked for car 1: ");
    scanf("%f", &hours1);
    charges1 = calculateCharges(hours1);
    totalHours =+ hours1;
    totalCharges += charges1;

    printf("Enter the hours parked for car 2: ");
    scanf("%f", &hours2);
    charges2 = calculateCharges(hours2);
    totalHours =+ hours2;
    totalCharges += charges2;

    printf("Enter the hours parked for car 3: ");
    scanf("%f", &hours3);
    charges3 = calculateCharges(hours3);
    totalHours =+ hours3;
    totalCharges += charges3;

    printf("Car\tHours\tCharge\n");
    printf("1%12.1f%9.2f\n", hours1, charges1);
    printf("2%12.1f%9.2f\n", hours2, charges2);
    printf("3%12.1f%9.2f\n", hours3, charges3);
    printf("TOTAL%8.1f%9.2f\n", totalHours , totalCharges);
    return 0;
}


/* The function calculateCharges calculates and returns a vehicle's
 * parking charges given the number of hours it was parked.
 */
float calculateCharges(float hours)
{
    float charges = 2.00;

    hours = ceil(hours);
    hours -= 3;

    while(hours > 0)
    {
        if(charges==10.00)
            break;
        hours -= 1.0;
        charges += 0.5;
    }

    return charges;
}



