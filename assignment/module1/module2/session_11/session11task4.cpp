/*
	Create a function incrementFollowers(int *followers, int n) 
	that increases each follower count in an array 
	(representing Instagram followers for 5 friends) 
	by 100 using pointer arithmetic, then print the updated counts.
*/

#include<stdio.h>
int increFollower(int *follower,int n)
{
	for(int i=0;i<n;i++)
	{
		*(follower+i) += 100;	// follower[i] += 100 alt;;;;
	}	
}
int main()
{
	int follower[5] = {100,200,300,400,500};
	
	increFollower(follower,5);
	
	printf("Updated Followers:)<^>\n");
	
	for(int i=0;i<5;i++)
	{
		printf("Followers: %d\n",follower[i]);
	}
}
