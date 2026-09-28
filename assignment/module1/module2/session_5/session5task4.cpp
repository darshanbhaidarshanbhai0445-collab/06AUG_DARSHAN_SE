//Write a program that takes a user's age and checks eligibility for three things using if-else statements:
// if age >= 18, print 'Eligible for Driving License';
 //if age >= 21, also print 'Eligible for Credit Card'; 
 //if age >= 25, also print 'Eligible for Car Rental'. 
 //Print all applicable messages for the given age.
 
 #include<stdio.h>
 main()
 {
 	int age;
 	printf("\n enter yore age = ");
 	scanf("%d",&age);
 	
 	if(age >= 18)
	 {
	 	printf("your age is = %d ",age);
 		printf("\n Eligible for Driving License ");
 		
 		if(age >= 21)
 		{
 			printf("\n Eligible for Credit Card ")	;
 			
 			if(age >=25)
 			{
 				printf("\n Eligible for Car Rental ");
			 }
		}
	 }
	 else
	 {
	 	printf("sorry your age not applicable ");
	 }
 }
