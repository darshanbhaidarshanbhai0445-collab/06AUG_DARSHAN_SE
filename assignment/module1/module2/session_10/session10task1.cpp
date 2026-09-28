//1.Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'. Print the length of the string using strlen()
#include<stdio.h>
#include<string.h>
main()
{
	char songtitle[11]="tum hi ho";
	printf("\n song is tum hi ho:%s",songtitle);
	printf("\n string length is:%d",strlen(songtitle));
}
