/*
Task 2: Weekly Study Hours Analyser
Build a program that records a student's daily study hours for 7 days, stores them in an array,
and generates a performance summary.
Use a for loop to accept 7 float values (one per day) and store them in a float array.
Calculate and print the weekly total, daily average, and the day number with the highest study
hours.
Print a simple visual bar for each day: the day number followed by one asterisk (*) per hour
studied, truncated to the nearest integer (e.g., Day 3: ***).
Reject and re-prompt for any day entry that is negative or greater than 24, before storing it in
the array.
*/

#include<stdio.h>

main()
{
	 printf("\n Weekly Study Hours Analyser........\n");
	 float store[8];
		int high=0;
	 float a;
	 float total=0;
	 float average;
	 for(int i=0; i<=6; i++)
	 {
	 	printf("\n enter your %d day study hour = ",i+1);
	 	scanf("%f",&a);
	 	if(a>=0 && a<=24)
	 	{
	 		store[i]=a;
		}
		
	 }
	 
	 for(int i1=0; i1<=6; i1++)
	 {
	 	printf("\n enter your %d day study hour = %.2f  ",i1+1,store[i1]);
	 	total=total+store[i1];
	 	
	 } 
	 average=total/7;
	 	printf("\n \n total ----------- %f",total);
	 	printf("\n \n average = %.2f",average);
	 	
	for(int b=0; b<=6; b++)
	 {
		if(high<store[b])
		{
			high=store[b];
			
		}
		else
		{
			high=high;
			
		}
	 	
	 } 
	 	printf("\n \n highest study hours %d ",high);
	 	
	 	printf("\n--- Visual Bar ---\n");
        for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        
        // Truncate to nearest integer
        int stars = (int)store[i]; 
        
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }
	 	
	 	
	
}
