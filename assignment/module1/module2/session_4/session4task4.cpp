/*Given three variables: likes, comments, and shares (all numbers), 
write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). 
Print the result.*/

#include<stdio.h>

main()
{
	int likes=1000,comments=101,shares=50;
	
	printf("\n check your post tranding or not \n" );
	printf(" your like = %d your comment = %d your shares = %d ",likes,comments,shares);
	if(likes >=1000 && comments>200 && shares >=50)
	{
		
		printf("\n now congratulation your post on tranding ");
	}
	else
	{
		printf("\nsorry try to batter");
	}
}
