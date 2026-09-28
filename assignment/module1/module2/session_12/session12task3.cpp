/*	
	Define a nested structure called MovieShow for a BookMyShow-style app: 
	Movie (string), Screen (integer), 
	and a nested structure Time 
	with hours and minutes (integers). 
	Create and initialize a MovieShow variable for any 
	movie and print its details in the format 
    'Movie: X, Screen: Y, Time: HH:MM'.
*/

#include<stdio.h>

struct MovieShow
{
	char movie[15] = "Spiderman";
	int screen = 1;
};

struct movieLen
{
	int hour = 2;
	int min = 35;
	struct MovieShow obX; // nested structure with object
} obY; // object of 2nd struct
int main()
{
	printf("Movie: %s, Screen: %d, Time:%d:%d HH:MM,",
	obY.obX.movie,
	obY.obX.screen,
	obY.hour,
	obY.min);
	return 0;	
}

