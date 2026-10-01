/* 
    Task 4: Personal Expense Logger
        Build a menu-driven C program that lets a user log and view personal daily expenses, and
        saves all records to a text file on exit.
        1.  Define a struct Expense with fields: category (char[30]) and amount (float). Allocate an array
            to store up to 10 Expense entries.
        2.  Present a menu with 3 options: (1) Add Expense, (2) View All Expenses, (3) Save & Exit. Loop until
            the user selects option 3.
        3.  In the View option, display all logged expenses in a formatted list and print the running total at  
            the bottom.
        4.  On exit (option 3), write all expense records to a file named expenses.txt using fprintf(), with
            one record per line in the format: category,amount. 
*/

#include<stdio.h>

struct expense
{
    char category[30];
    float amount;
} ex[10];

int main()
{
    int n=10;
    int choice;
    float total_expense = 0;

    printf("\n");
    printf("     Welcome to Personal Expense Logger     ");
    printf("\n");
    // printf("\n");

    while(1)
    {
    printf("\n");
    printf("|           Press 1 for Add Expense          |\n");
    printf("|           Press 2 for View Expense         |\n");
    printf("|           Press 3 for Save & Exit          |");
    printf("\n");
    
    printf("\nEnter Your Choice >>> ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
            printf("\n<<<========================================>>>\n");
        for(int i=0;i<n;i++)
        {
            printf("Enter Your Expense Category %d:",i+1);
            scanf("%s",&ex[i].category);

            printf("Enter Your Expense amount of Category %d:",i+1);
            scanf("%f",&ex[i].amount);
            printf("\n\n");
        }
            printf("<<<========================================>>>\n");      
        break;
    case 2:
        for(int i=0;i<n;i++)
        {
            total_expense +=ex[i].amount;
        }
            printf("\n+----------------------+------------+\n");
            printf("| %-20s | %-10s |\n", "Expense Category", "Amount");
            printf("+----------------------+------------+\n");

        for(int i=0;i<n;i++)
        {
            printf("| %-20s | %-10.2f |\n", ex[i].category, ex[i].amount);
        }
            printf("+----------------------+------------+\n");
            printf("| %-20s | %-10.2f |\n","Total Expense",total_expense);
            printf("+----------------------+------------+\n");
        break;
    
    case 3:
        {
            FILE *ob;
            ob = fopen("expense.txt","w");
            // printf("FILE CREATED");

            fprintf(ob, "\n+----------------------+------------+\n");
            fprintf(ob,"| %-20s | %-10s |\n", "Expense Category", "Amount");
            fprintf(ob,"+----------------------+------------+\n");

            for(int i=0;i<n;i++)
            {
            fprintf(ob,"| %-20s | %-10.2f |\n", ex[i].category, ex[i].amount);
            }
            fprintf(ob,"+----------------------+------------+\n");
            fprintf(ob,"| %-20s | %-10.2f |\n","Total Expense",total_expense);
            fprintf(ob,"+----------------------+------------+\n");


        }
        break;
    
    default:
        printf("Error! Invalid Choice");
        break;
    }

    if(choice == 3)
    {
        break;
    }
    }
    return 0;
}
