/*
	Build a function formatPrice that takes a price 
	in rupees and returns a string formatted like Flipkart's price tag 
	(e.g., '$1,599'). 
	Use this function to display prices for three different products.
*/

#include <stdio.h>

void formatPrice(int price, char result[])
{
    if (price >= 1000)
    {
        sprintf(result, "%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        sprintf(result, "%d", price);
    }
}

int main()
{
    char price1[20];
    char price2[20];
    char price3[20];

    formatPrice(1599, price1);
    formatPrice(25999, price2);
    formatPrice(799, price3);

    printf("Product 1: $%s\n", price1);
    printf("Product 2: $%s\n", price2);
    printf("Product 3: $%s\n", price3);

    return 0;
}
