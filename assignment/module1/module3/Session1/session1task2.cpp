//Modify your tasklist_c.c to add a function markTaskDone(int index) that sets 
//the selected task to 'DONE' in the array, then print the updated list.
//<br><br><em><strong>Hint:</strong> Use a separate status array or append ' - DONE' to the task string.</em>

#include<stdio.h>
#include<string.h>

char task[20][50];

void markTaskDone(int index)
{
	
	printf("\n........TASK..........");

	for(int i=0; i<5; i++)
	{
	
	strcat(task[i], " - DONE");
	printf("\n %d = %s", i + 1, task[i]);
	
	}
	
}

main()
{
	for(int i=0; i<5; i++)
	{
	printf("\n enter your task %d ", i +1);
	gets(task[i]);
	
	}
	
		
	markTaskDone(0);

}

