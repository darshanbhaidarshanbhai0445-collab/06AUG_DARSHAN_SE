/*Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate 
the final price (apply an extra 5% off if isMember is true).*/

#include<stdio.h>
int main()
{
	float product_price=50.50;
	int dis_per=5;
	bool ismembar=true;
	float calculate_discount=(product_price*dis_per)/100;
	float final_price=product_price-calculate_discount;
	
	if (ismembar== true)
	{
	float extra_discount=(final_price*5)/100;
	float final_price2=final_price-extra_discount;
	printf("congratulation you won extra_discount.....\n");
    printf("your final price with your extra_discount %.2f-%.2f =%.2f -",final_price, extra_discount,final_price2);
	}
	else
	{
	    printf("your final price with 5 parcente discount %.2f ",final_price);
	}
	return 0;
	
	
	
}
