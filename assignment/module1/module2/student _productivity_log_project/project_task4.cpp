/*
	Add a feature to your app that 
	reads the saved music_log.txt file 
	and generates a 
	weekly report showing 
	the total, 
	average, and 
	highest listening minutes in the week.
*/

#include <stdio.h>

int main()
{    
    int min[7];
    int i, choice;

    printf("----------------------------------------------\n");
    printf("Welcome to Music Listening App\n");
    printf("----------------------------------------------\n");

    while(1)
    {
        printf("Press 1 to Add your Logs\n");
        printf("Press 2 to View your Logs (from Memory)\n");
        printf("Press 3 to Generate Weekly Report (from File)\n");
        printf("Press 4 to Log out\n");
        printf("----------------------------------------------\n");
        scanf("%d", &choice);
        printf("----------------------------------------------\n");
    
        switch(choice)
        {
            case 1: {
                FILE *ob = fopen("music_log.txt", "w");
                if (ob == NULL) {
                    printf("Error opening file for writing!\n");
                    break;
                }

                printf("File Created! Now Enter Your Logs:\n");
                printf("----------------------------------------------\n");
                fprintf(ob, "Your Added Log\n");
                fprintf(ob, "----------------------------------------------\n");
                
                for(i = 0; i < 7; i++)
                {
                    printf("Day %d:- ", i + 1);
                    scanf("%d", &min[i]);    
                    fprintf(ob, "Day %d: %d Minutes\n", i + 1, min[i]);                    
                }
                fprintf(ob, "----------------------------------------------\n");
                fclose(ob); // Always close the file stream after writing
                
                printf("Logs saved successfully to music_log.txt!\n");
                printf("----------------------------------------------\n");
                break;
            }
            
            case 2: {
                printf("Your Added Log (Current Session)\n");
                printf("----------------------------------------------\n");
                for(i = 0; i < 7; i++)
                {
                    printf("Your day %d music play time:- %d Minutes\n", i + 1, min[i]);
                }
                printf("----------------------------------------------\n");
                break;
            }

            case 3: {
                FILE *ob = fopen("music_log.txt", "r");
                if (ob == NULL) {
                    printf("No saved log found! Please add your logs first (Option 1).\n");
                    printf("----------------------------------------------\n");
                    break;
                }

                int dayNum, dayMin;
                int totalMinutes = 0;
                int maxMinutes = 0;
                int count = 0;
                char line[256];

                    // this will skip header line
                fgets(line, sizeof(line), ob);
                fgets(line, sizeof(line), ob);

                // Read day data from music_log.txt
                while (fscanf(ob, "Day %d: %d Minutes\n", &dayNum, &dayMin) == 2) {
                    totalMinutes += dayMin;
                    if (dayMin > maxMinutes) {
                        maxMinutes = dayMin;
                    }
                    count++;
                }
                fclose(ob);

                if (count == 0) {
                    printf("File is empty or formatted incorrectly.\n");
                } else {
                    float averageMinutes = (float)totalMinutes / count;

                    printf("----------------------------------------------\n");
                    printf("          WEEKLY MUSIC REPORT                 \n");
                    printf("----------------------------------------------\n");
                    printf("Total Listening Time   : %d Minutes\n", totalMinutes);
                    printf("Average Daily Listening: %.2f Minutes\n", averageMinutes);
                    printf("Highest Daily Listening: %d Minutes\n", maxMinutes);
                    printf("----------------------------------------------\n");
                }
                break;
            }
            
            case 4: {
                printf("Logging out! Visit Again\n");
                printf("----------------------------------------------\n");
                break;
            }
        
            default: {
                printf("Error! Please enter 1, 2, 3, or 4 only.\n");
                printf("----------------------------------------------\n");
                break;
            }
        }
        
        if (choice == 4)
		{
            break;
        }        
    }
    return 0;
}
