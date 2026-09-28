/*
	Declare a structure named Playlist to store details of a song: 
	title (string), artist (string), 
	and duration in seconds (integer). 
	Initialize one Playlist variable with your favorite song's details and print each field.
*/

#include<stdio.h>

struct playList
{
	char title[50],artist[25];
	int duration;
} music;

int main()
{
	printf("Enter title of the song:");
	gets(music.title);
	printf("Enter the name of the artist:");
	gets(music.artist);	
	printf("Enter duration of the song:");
	scanf("%d",&music.duration);
	
	printf("\n========================\n");
	printf("Artist: %s\n",music.artist);
	printf("Title: %s\n",music.title);
	printf("Duration: %d Seconds",music.duration);
	printf("\n========================\n");
}
