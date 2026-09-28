/*Create a Flipkart discount calculator that asks the user for the total cart amount. 
Use nested if statements to check: 
if amount > 2000, apply 20% discount; 
else if amount > 1000, apply 10% discount; 
else, no discount. Print the final amount to pay.
<br><br><em><strong>Hint:</strong> Use nested ifs to check each discount slab.</em>*/

#include<stdio.h>
main()
{
	float cart_amount;
	
	printf("\n --------take discount---------\n");
	printf("\n enetr your cart total amount = ");
	scanf("%f",&cart_amount);
	
	float dis=cart_amount*20/100;
	float dis1=cart_amount*10/100;
	
	if(cart_amount>2000)
	{
		
		printf("\n congratulation you won 20percent discount");
		printf("\n your amount discount %.2f *20 percent = %.2f ",cart_amount,dis);
		printf("\n your total amount is\n cart amount = %.2f \n your discount = %.2f \n ------------------------- \n total amount = %.2f ",cart_amount,dis,cart_amount-dis);
	}
	else if(cart_amount>1000)
	{
		printf("\n congratulation you won 10 percent discount");
		printf("\n your amount discount %.2f *10 percent = %.2f ",cart_amount,dis1);	
		printf("\n your total amount is\n cart amount = %.2f \n your discount = %.2f \n ------------------------- \n total amount = %.2f ",cart_amount,dis1,cart_amount-dis1);
	} 
	else
	{
		printf("\n sorry no discount\n");
		printf("\n your total amount is\n cart amount = %.2f \n your discount = %.2f \n ------------------------- \n total amount = %.2f ",cart_amount,0,cart_amount);
	}
	
}
