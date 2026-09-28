/*Write a function isEligibleForOffer that takes a user's age and total order value, and 
returns true if the user is 18 or older AND the order value is above 500, otherwise
false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.*/

#include <stdio.h>
#include <stdbool.h>
int age,value;
int iseligibleforoffer()
    {
        printf("enter your age= ");
        scanf("\n%d",&age);
        
        printf("\n enter your total order value = ");
        scanf("\n%d",&value);
        
        if(age>=18 && value >= 500 )
        {
            printf("yes...");
            return true;
        }
        else
        {
        	printf("sorry.... ");
            return false;
        }
    }
main()
{
    printf("lets check you eligible or not......\n");
    bool result=iseligibleforoffer();
    printf("%d",result);
    
    
    

    
}
