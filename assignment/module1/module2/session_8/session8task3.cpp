/*
	Write two functions: 
	increaseFollowersByValue and increaseFollowersByReference. 
	Each should take a followers count and add 1000 to it, 
	but one should use pass-by-value and the other pass-by-reference. 
	Show how the original followers count changes (or doesn't) after calling each function.
*/

#include <stdio.h>

int followByValue(int follower)
{
	//follower = 1000;
	follower = follower + 1000;
	printf("Follower By Value inside the function: %d\n",follower);
}

int followByRef(int *follower)
{
	//*follower = 1000;
	*follower = *follower + 1000;
	printf("Follower By Reference inside the function: %d\n",*follower);
}
int main() 
{
	
	int follower = 5000;
	printf("Original Followers: %d\n",follower);
	followByValue(follower);
	printf("Followers By Value: %d\n",follower);
	followByRef(&follower);
	printf("Followers By Reference: %d\n",follower);
	
    return 0;
}
