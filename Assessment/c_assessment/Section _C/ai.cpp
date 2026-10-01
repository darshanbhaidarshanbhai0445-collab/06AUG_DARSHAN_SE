#include <stdio.h>
#include <stdlib.h>

#define NUM_SUBJECTS 3
#define DAYS_IN_WEEK 7

// 1. Struct definition matching the exact requirements
struct StudyLog {
    char subject[40];
    float hours[DAYS_IN_WEEK];
};

// Global array of 3 subjects
struct StudyLog st[NUM_SUBJECTS];

// 2. Function to calculate and display weekly total and daily average per subject
void print_subject_statistics(void) {
    int i, j;
    printf("\n================ WEEKLY SUMMARY ================\n");
    for (i = 0; i < NUM_SUBJECTS; i++) {
        float total_hours = 0.0f;
        for (j = 0; j < DAYS_IN_WEEK; j++) {
            total_hours += st[i].hours[j];
        }
        float avg = total_hours / DAYS_IN_WEEK;
        printf("Subject: %-15s | Total: %6.2f hrs | Daily Avg: %5.2f hrs\n", 
               st[i].subject, total_hours, avg);
    }
    printf("================================================\n");
}

// Helper function to render progress chart
void print_progress_chart(void) {
    int i, j, k;
    printf("\n================ PROGRESS CHART ================\n");
    for (i = 0; i < NUM_SUBJECTS; i++) 
    {
        printf("\nSubject: %s\n", st[i].subject);
        for (j = 0; j < DAYS_IN_WEEK; j++) 
        {
            int dots = (int)st[i].hours[j]; // Truncate to nearest integer
            printf("  Day %d: ", j + 1);
            for (k = 0; k < dots; k++) 
            {
                printf("• ");
            }
            if (dots == 0) 
            {
                printf("-");
            }
            printf(" (%.1f hrs)\n", st[i].hours[j]);
        }
    }
    printf("================================================\n");
}

int main(void) {
    int choice;
    int i, j;

    // Optional: Pre-fill subject names (or allow user to enter them once)
    for (i = 0; i < NUM_SUBJECTS; i++) {
        printf("Enter name for Subject %d: ", i + 1);
        scanf("%39s", st[i].subject);
    }

    while (1) {
        printf("\n<<<========================================>>>\n");
        printf("|    Welcome to Student Productivity Tracker  |\n");
        printf("<<<========================================>>>\n");
        printf("| 1. Log Study Hours                         |\n");
        printf("| 2. View Weekly Report & Progress Chart     |\n");
        printf("| 3. Save & Exit                             |\n");
        printf("<<<========================================>>>\n");
        printf("Enter Your Choice >>> ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Exiting program.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\n--- LOG STUDY HOURS ---\n");
                for (i = 0; i < NUM_SUBJECTS; i++) {
                    printf("\nLogging hours for %s:\n", st[i].subject);
                    for (j = 0; j < DAYS_IN_WEEK; j++) {
                        printf("  Day %d hours: ", j + 1);
                        scanf("%f", &st[i].hours[j]);
                    }
                }
                break;

            case 2:
                // View Weekly Report (Math + Progress Chart)
                print_subject_statistics();
                print_progress_chart();
                break;

            case 3: {
                // Save records to file as CSV format
                FILE *fp = fopen("productivity_log.txt", "a");
                if (fp == NULL) {
                    printf("Error opening file for writing!\n");
                    return 1;
                }

                for (i = 0; i < NUM_SUBJECTS; i++) {
                    // Write Subject name first
                    fprintf(fp, "%s", st[i].subject);
                    // Write 7 daily values comma-separated
                    for (j = 0; j < DAYS_IN_WEEK; j++) {
                        fprintf(fp, ",%.2f", st[i].hours[j]);
                    }
                    fprintf(fp, "\n");
                }

                fclose(fp);
                printf("\nData successfully saved to productivity_log.txt!\nExiting...\n");
                return 0;
            }

            default:
                printf("\nChoice Error! Kindly enter 1, 2, or 3.\n");
                break;
        }
    }

    return 0;
}