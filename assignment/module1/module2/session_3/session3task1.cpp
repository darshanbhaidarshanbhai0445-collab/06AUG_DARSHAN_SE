//Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). 
//Assign sample values and print each variable with its data type.
#include<stdio.h>
main()
{
	char productname[10]="Toy car";
	float price=101.50f;
	double rating=4.3;
	
	printf("your product is %s [datatype string]\n",productname);
	printf("this %s price is %.2f [datatype float] \n",productname,price);
	printf("this %s product are achived rating is %.1lf [datatype double] \n",productname,rating);
	
	
}
