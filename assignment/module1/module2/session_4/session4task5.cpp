// Demonstration of Pre-increment (++count) vs Post-increment (count++) in C

#include <stdio.h>

main()
{
    
    
    int followerCount = 10;
    
    printf("Initial followerCount: %d\n", followerCount);
    
    printf("Value during ++followerCount (pre-increment): %d\n", ++followerCount);
    printf("followerCount after pre-increment: %d\n", followerCount);
    
    printf("-----------------------------------\n");
    
    followerCount = 10;
    printf("Initial followerCount: %d\n", followerCount);
    
    printf("Value during followerCount++ (post-increment): %d\n", followerCount++);
    printf("followerCount after post-increment: %d\n", followerCount);

}

