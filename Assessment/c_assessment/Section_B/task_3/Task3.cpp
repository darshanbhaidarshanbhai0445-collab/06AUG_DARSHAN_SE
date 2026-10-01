/* 
    Task 3: Student Record Manager
    Build a C program using structures and functions to store, display, and identify the top
    performer among a group of students.
    1.  Define a struct Student with fields: name (char[50]), roll-no (int), marks (float), and grade
        (char).
    2.  Write a function void assignGrade(struct Student *s) that sets the grade field based on the
        marks value using the same bands as Task 1.
    3.  In main(), accept data for 3 students, call assignGrade() for each, and display all records in a
        formatted table with column headers.
    4.  Write a separate function void printTopper(struct Student[], int n) that prints the name and
        marks of the student with the highest marks. 
*/

#include<stdio.h>

struct student {
    char name[50];
    int roll_no;
    float marks;
    char grade;
} st[50];

void assignGrade(struct student *k)
{
    if(k->marks < 0 || k -> marks > 100)   
    {
    printf("Invalid Score!! Your score must in range of 0 to 100\n");
        k->grade = '?';
        return;
    }

    if(k->marks>=90)
    {
        k->grade = 'A';
    }
    else if (k->marks>=75)
    {
        k->grade = 'B';
    }
    else if (k->marks>=60)
    {
        k->grade = 'C';
    }
     else if (k->marks>=45)
    {
        k->grade = 'D';
    }
     else 
    {
        k->grade = 'F';
    }    
}

/* void printTopper(struct student st[],int n)
{
    if(n<=0)
    {
        printf("|No Student Available in the record|\n");
        return ;
    }

    int max_score = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(st[i].marks > st[max_score].marks)
        {
            max_score = i;
        }
    }
    printf("\n--------------------------------------------------\n");
    printf("                     Class Topper                     ");
    printf("\n--------------------------------------------------\n");

    printf("Roll Number:-%d\n",st[max_score].roll_no);
    printf("Name:-%s\n",st[max_score].name);
    printf("Marks:-%.1f\n",st[max_score].marks);
    printf("Grade:-%c\n",st[max_score].grade);
} */

void printTopper(struct student st[], int n)
{
    if (n <= 0) return;

    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (st[i].marks > st[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\n+-------------------------------------------+\n");
    printf("|              CLASS TOPPER                |\n");
    printf("+-------------------------------------------+\n");
    printf("|  %-12s : %-24d |\n", "Roll Number", st[maxIndex].roll_no);
    printf("|  %-12s : %-24s |\n", "Name", st[maxIndex].name);
    printf("|  %-12s : %-24.1f |\n", "Marks", st[maxIndex].marks);
    printf("|  %-12s : %-24c |\n", "Grade", st[maxIndex].grade);
    printf("+-------------------------------------------+\n");
}


int main()
{
    int i,n=3; 
    for(i=0;i<n;i++)
    {
        printf("\nEnter Roll Number of student %d:-\n",i+1);
        scanf("%d",&st[i].roll_no);

        printf("Enter Name of student %d:-\n",i+1);
        scanf("%s",st[i].name);

        do
        {
            printf("Enter Marks of student %d:-\n",i+1);
            scanf("%f",&st[i].marks);

            if(st[i].marks < 0 || st[i].marks >100)
            {
                printf("\nInvalid Score!! Your score must in range of 0 to 100\n");
            }
        } while (st[i].marks <0 || st[i].marks>100);
        assignGrade(&st[i]);
    }
    
        printf("\n%-12s %-15s %-15s %-5s" ,"Roll Number","Name","Marks","Grade\n");
        printf("--------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%-12d %-15s %-15.1f %-5c\n",
            st[i].roll_no,
            st[i].name,
            st[i].marks,
            st[i].grade);
    }
        printf("--------------------------------------------------------------\n");

        printTopper(st,n);
        return 0;
}