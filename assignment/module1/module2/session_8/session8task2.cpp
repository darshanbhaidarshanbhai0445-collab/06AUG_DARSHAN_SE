/*
	Create a function addToCart that takes 
	a shopping cart array and a product name, 
	adds the product to the cart, and prints the updated cart. 		
	Demonstrate how passing the cart 
	array by reference allows changes 
	to persist outside the function.
	
	Hint:In languages like JavaScript, 
	arrays are passed by reference. 
	In C/C++, use pointers for reference behavior.

*/

#include <stdio.h>
#include <string.h>

void addToCart(char (*cart)[50],char product[10],int *count)
{
	strcpy(cart[*count],product);
	(*count)++;
	
	printf("\nUpdated Cart\n");
	for(int i = 0; i<*count;i++)
	{
		printf("Product:%d is %s\n",i,cart[i]);
	}
	
}
int main()
{
	char cart[10][50] = {"Apple","Banana","Kaju"};
	char product[10];
	int count = 3;
	printf("Enter Product to add into cart:");
	scanf("%s",product);	
	addToCart(cart,product,&count);
	printf("\n+++++-----\n");
	printf("Cart Outside the function\n");
	for(int i=0;i<count;i++)
	{
		printf("Cart Item %d: %s\n",i,cart[i]);
	}
}
