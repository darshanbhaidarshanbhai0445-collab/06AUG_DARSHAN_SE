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

int i,j;

struct StudyLog
{
    char subject[50];
    float hours[7];
} st[3];

void weekly_total()
{
    float total_hours = 0;
    printf("<<<========== Weekly Summary ==========>>>\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<7;j++)
        {
            total_hours += st[i].hours[j];
        }
    }

    float avg = total_hours/7.0;

    printf("Subject : %-15s | Total Hours : %-6.2f | Average : %-5.2f",    
    st[i].subject,total_hours,avg);

    printf("<<<-----------------------------------------------\n>>>");
}

void progress_chart()
{
    printf("\n================ PROGRESS CHART ================\n");
    int k;

    for(i=0;i<3;i++)
    {
        printf("\n|Subjects: %s|\n",st[i].subject);
        for(j=0;j<7;j++)
        {
            int chart = (int)(st[i].hours[j]);
            printf("Day %d >>>",j+1);

            for(k=0;k<chart;k++)
            {
                printf(" . ");
            }
        printf(" (%.1f hrs)\n", st[i].hours[j]);
        }
    }
    printf("================================================\n");
}

int main()
{
    int choice;
    // int i,j;

    for(i=0;i<3;i++)
    {
        printf("Enter the name of subject %d",i+1);
        scanf("%s",st[i].subject);
    }

    while (1)
    {
    printf("\n<<<========================================>>>\n");
    printf("|  Welcome to Student Productivity Tracker   |");
    printf("\n<<<========================================>>>\n");
    printf("| 1. Log Study Hours                         |\n");
    printf("| 2. View Weekly Report & Progress Chart     |\n");
    printf("| 3. Save & Exit                             |\n");
    printf("<<<========================================>>>\n");
    printf("Enter Your Choice >>> ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        for(i=0;i<3;i++)
        {
            printf("\nLogging Hours: %s Subject\n",st[i].subject);
            {
                for(j=0;j<7;j++)
                {
                    printf("Day % d Hours >>>",j+1);
                    scanf("%f",&st[i].hours[j]);
                }
            }
        }
        break;
    
    case 2:
        weekly_total();
        progress_chart();
        break;

    case 3:

    FILE *ob;
    ob = fopen("Productivity_log.txt","a");

    for(i=0;i<3;i++)
    {
        fprintf(ob,"%s",st[i].subject);
        for(j=0;j<7;j++)
        {
            fprintf(ob,",%.2f hh",st[i].hours[j]);
        }
        fprintf(ob,"\n");
    }

    fclose(ob);
    return 0;
        break;
    
    default:
        printf("\n Error ! Kindly go with 1 or 2 or 3  \n");
        break;
    }

    if (choice == 3)
    {
        break;
    }
}
    return 0;
}