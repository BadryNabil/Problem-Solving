#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int quantity,product_number  = 0 ;
    double total_retail = 0 ;
    printf("Enters pairs of product number and quantity\n");

    scanf("%d",&product_number);
    while (product_number != -1)
    {
	scanf("%d",&quantity);
	switch(product_number)
	{
	case 1 :
		total_retail = total_retail + quantity * 2.98;
		break;
	case 2 :
		total_retail = total_retail + quantity * 4.50;
		break;
	case 3 :
		total_retail = total_retail + quantity * 9.98;
		break;
	case 4 :
		total_retail = total_retail + quantity * 4.49;
		break;
	case 5 :
		total_retail = total_retail + quantity * 6.87;
		break;
	}
	scanf("%d",&product_number);
    }
	printf("Total retail is : %.2f",total_retail);
    return 0 ;
}
