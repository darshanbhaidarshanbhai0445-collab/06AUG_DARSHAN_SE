/*	
	Given an array of 5 order amounts (e.g., Zomato orders), 
	use a pointer to iterate through the array 
	and print each amount along with its memory address.
	Hint:Use pointer arithmetic to move to the next element.
*/

#include<stdio.h>
int main()
{
	int order[5],i;
	
	for(i=1;i<=5;i++)
	{
		printf("ENTER_ORDER_AMMOUNT_%d:",i);
		scanf("%d",&order[i]);
	
	}
	for(i=1;i<=5;i++)
	{
		printf("OrderAmount_%d : %d\n\n",i,order[i]);
		printf("Memory_Address of OrderAmount_%d : %d\n\n",i,&order[i]);
	}
	return 0;
}
