/*
	Write a program that reads all song names 
	from playlist.txt and prints only those 
	that contain the word 'love' (case-insensitive).
	Hint:
	Use the 'in' keyword or equivalent string method for filtering.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *ob;
    char song[100];

    ob = fopen("playList.txt", "r");

    while (fgets(song, 100, ob))
    {
        for (int i = 0; song[i] != '\0'; i++)
        {
            song[i] = tolower(song[i]);
        }

        if (strstr(song, "love") != NULL)
        {
            printf("%s", song);
        }
    }
    fclose(ob);
    return 0;
}
