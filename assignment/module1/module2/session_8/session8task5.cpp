/*
	Refactor an existing function you wrote above to 
	make it reusable for both product names and usernames 
	(for example, a function that capitalizes the first letter of any string).
	Constraint:
	The refactored function should work for any string input, not just a specific use case.
*/
#include <stdio.h>
#include <ctype.h>

void capitalize(char str[])
{
    str[0] = toupper(str[0]);
}

int main()
{
    char names[4][50] = {
        "apple",
        "rahul",
        "banana",
        "john"
    };
    for (int i = 0; i < 4; i++)
    {
        capitalize(names[i]);
        printf("%s\n", names[i]);
    }
    return 0;
}

