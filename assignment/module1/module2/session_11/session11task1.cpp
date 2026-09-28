/*
	Declare an integer variable called likes and a pointer 
	variable called ptrLikes; 
	assign likes a value, 
	point ptrLikes to likes, 
	and print both the value and the address stored in ptrLikes.
*/

#include<stdio.h>
int main()
{
	int like;
	like = 100;
	int *ptrlikes = &like;
	printf("Likes:%d\n",like);
	printf("ptrlikes:%d",&ptrlikes);
}
