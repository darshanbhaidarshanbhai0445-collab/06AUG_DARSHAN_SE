/* 
    Mini Project:  Student Productivity Tracker
    Objective:
    
    Build a console-based Student Productivity Tracker that logs daily study hours across subjects
    for a full week, combining arrays, structures, functions, and file handling from Module 3 into a
    single working program.
    Your project must:
    
    The program must be menu-driven with at least 3 options: (1) Log Today's Study Hours, (2)
    View Weekly Report, (3) Save & Exit.
    
    Define a struct StudyLog { char subject[40]; float hours[7]; } and create an array of at least 3
    subject records.
    
    Write a function that calculates and displays the weekly total hours and daily average for
    each subject.
    
    Display a simple text-based progress chart: for each subject, print one filled dot (•) per hour
    studied that day (truncate to nearest integer).
    
    On exit, save all records to a file named productivity_log.txt using fprintf(), with each subject's
    name and 7 daily values written as a single comma-separated line.
*/

#include<stdio.h>
int n=7;
int i;

struct studyLog
{
    char subject[50];
    float hours ;
}st[3];


void math_of_subject()
{
    float total_hours =0;
    float avg;
    for(i=0;i<n;i++)
    {
        total_hours += st[i].hours; 
    }
    printf("\nTotal weekly study hours:->%.2f\n",total_hours);
    avg = total_hours / 7;
    printf("Daily Average of study hours:->%.2f\n",avg);
}

int main()
{
    printf("\n<<<========================================>>>\n");
    printf("|  Welcome to Student Productivity Tracker   |");
    printf("\n<<<========================================>>>\n");

    int choice ;
   
    

    while(1)
    {
    printf("\n<<<========================================>>>\n");
    printf("|      Press 1 for Log Today's Study Hour    |\n");
    printf("|      Press 2 for View Weekly Report        |\n");
    printf("|      Press 3 for Save & Exit               |\n");
    printf("<<<========================================>>>\n");
    printf("            Enter Your Choice >>>   ");
    scanf("%d",&choice);
    printf("<<<========================================>>>\n");

    switch (choice)
    {
    case 1:
        for(i = 0; i<n ; i++)
        {
            printf("<<<========================================>>>\n");
            printf("|                   Day %d                  |",i+1);
            printf("\n<<<========================================>>>\n");

            printf("Kindly enter the name of subject you studied:>>>---");
            scanf("%s",st[i].subject);

            printf("              And how many hours?            >>>---");
            scanf("%f",&st[i].hours);
        }
        break;
    
    case 2:
        math_of_subject();
        int j ;
        printf("\n");
        printf("<<<========================================<<<\n");
        printf("|               Progress Chart             |",i+1);
        printf("\n<<<========================================>>>\n");

        for (i=0;i<n;i++)
        {
            printf("Day : %d Study Chart",i+1);
            int chart = int(st[i].hours) ;
            for(j=0;j<chart;j++)
            {
                printf(" • ");
            }
            printf("\n");
        }
        break;

    case 3:
        // printf("Exit");
        FILE *ob;
        ob = fopen("Productivity_log.txt","a");
        printf("file created");


        fprintf(ob, "\n+----------------------------------------------------+\n");
        fprintf(ob,"| %-10s | %-20s | %-10s  |\n","Day","Subject", "Study Hours");
        fprintf(ob, "+----------------------------------------------------+\n");

        for(i=0;i<n;i++)
        {
            fprintf(ob,"| %-10d | %-20s | %-10.2f   |\n",i+1,st[i].subject, st[i].hours);
        }
        fprintf(ob, "+----------------------------------------------------+\n");
        break;

    default:
        printf("Choice Error! kindly go with 1 or 2 or 3");
        break;
    }
        if(choice == 3)
    {
        break;
    }
    }
    return 0;
}