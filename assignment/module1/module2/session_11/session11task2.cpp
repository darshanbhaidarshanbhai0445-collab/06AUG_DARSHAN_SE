/*
	Write a function swapPlaylistCounts(int *a, int *b) 
	that swaps the number of songs in two Spotify playlists 
	using pointers, then call the function in main and print the swapped values.
*/

//#include<stdio.h>
//
//int main()
//
//{
//	int x=10;
//	int y=20;
//	int temp;
//	
//	printf("Before Swap:\n");
//	printf("x=%d",x);
//	printf("y:%d",y);
//	
//	x=temp;
//	x=y;
//	y=x;
//	
//	printf("after Swap:\n");
//	printf("x=%d",x);
//	printf("y:%d",y);	
//}


#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int A = 25;
    int B = 40;

    printf("Before swapping:\n");
    printf("Playlist A: %d\n", A);
    printf("Playlist B: %d\n", B);

    swap(&A, &B);

    printf("\nAfter swapping:\n");
    printf("Playlist A: %d\n", A);
    printf("Playlist B: %d\n", B);

    return 0;
}
