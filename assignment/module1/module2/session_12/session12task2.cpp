/*
	Create a structure called FoodItem to store Zomato-style menu data: 
	itemName (string), price (float), and rating (float). 
	Initialize an array of 3 FoodItem variables 
	with real menu items and display their details using a loop.
*/

#include<stdio.h>

struct FoofItem
{
	char itemName[100];
	float price;
	float rating;
} zomato[20];
int main()
{
	int i,stock;
	printf("Enter the number of current stock:-");
	scanf("%d",&stock);
	for(i=0;i<stock;i++)
	{
		printf("Enter the name of available food at your Hotel:-");
		scanf("%s",zomato[i].itemName);
		
		printf("Enter price:-");
		scanf("%f",&zomato[i].price);
		
		printf("Enter ratings given by customer:-");
		scanf("%f",&zomato[i].rating);
	}
		printf("\n====================\n");
		printf("\nFood Menu\n");
		printf("\n====================\n");
	for(i=0;i<stock;i++)
	{
		printf("Food Option_%d >>> %s\n",i,zomato[i].itemName);
		printf("Price of Food Option_%d >>> %.2f$\n",i,zomato[i].price);
		printf("Rating of Food Option_%d >>> %.1f\n",i,zomato[i].rating);
		printf("\n====================\n");
	}
	return 0;
}
