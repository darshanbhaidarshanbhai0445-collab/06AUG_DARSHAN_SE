//Create a simple c function called calculateTotal that takes two numbers: itemPrice and quantity, 
//and returns the total bill amount using arithmetic operators.
#include<stdio.h>
float calculatetotal(float itemprice,int quantity)
{
	return itemprice*quantity;
}
main()
{
	float a=150.50;
	int b=10;
	printf("your total bill amount is %.2f  * %d = %.2f ",a,b,calculatetotal(a,b));
		

}
