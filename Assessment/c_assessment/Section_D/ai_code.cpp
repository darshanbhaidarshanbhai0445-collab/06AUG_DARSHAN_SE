/* 
    STEP 1  ·  BUILD WITH AI
    
    Use an AI tool of your choice (ChatGPT, Claude, GitHub Copilot, etc.) to help you write a C program that: 
    1.  Accepts exactly 10 integers from the user using a loop and stores them in an array.
    2.  Finds and displays the maximum value, minimum value, and arithmetic mean (displayed as a
        float with 2 decimal places).
    3.  Sorts the array in ascending order using any sorting method and displays the sorted list.
    4.  Prints whether the mean is closer to the minimum, closer to the maximum, or exactly midway
        between them
*/

/* 
    Prompt Given to ai (ChatGpt)

    Write a c code that accept exactly 10 integers from the user using for loop and store 
    them in an array and then find maximum and minimum value and 
    arith-mic mean displayed as float with 2 decimal places 
    and sort the array in ascending order using any sorting method and 
    displays the sorted list. & Prints whether the mean is closer to the minimum, 
    closer to the maximum, or exactly midway between them.  
*/
#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, temp;
    int max, min;
    float mean;

    // Accept exactly 10 integers
    printf("Enter 10 integers:\n");

    for(i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first element is maximum and minimum
    max = arr[0];
    min = arr[0];

    // Find maximum and minimum
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Calculate arithmetic mean
    int sum = 0;

    for(i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    mean = (float)sum / 10;

    // Sort array in ascending order
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display results
    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Arithmetic Mean = %.2f\n", mean);

    // Display sorted array
    printf("Sorted array in ascending order:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Check where mean lies
    float distanceFromMin = mean - min;
    float distanceFromMax = max - mean;

    if(distanceFromMin < distanceFromMax)
    {
        printf("Mean is closer to the minimum.\n");
    }
    else if(distanceFromMin > distanceFromMax)
    {
        printf("Mean is closer to the maximum.\n");
    }
    else
    {
        printf("Mean is exactly midway between the minimum and maximum.\n");
    }
    return 0;
}