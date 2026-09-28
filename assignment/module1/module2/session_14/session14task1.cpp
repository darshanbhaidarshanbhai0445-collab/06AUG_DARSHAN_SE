/*
	Given the following buggy code meant to 
	calculate the total price of a Zomato order, 
	identify and fix the syntax and runtime errors:
	
	let items = ["Burger", "Pizza", "Fries"];
	let prices = [120, 250, 90];
	let total = 0;
	for (i = 0; i < items.length; i++) 
	{
	total =+ prices[i]<br>}
	console.log("Total price is: " + total);
	
	Hint:
	Watch for assignment and loop variable issues.
*/

#include<stdio.h>
int main()
{
	char items[10][10] = {"Burger","Pizza","Fries"};
	int prices[10] = {120,250,90};
	int total,i;
	
	total =0;
	
	for(i=0;i<3;i++)
	{
		total = total + prices[i];
	}
	printf("Total Price:%d",total);
	return 0;
}
