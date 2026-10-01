#include<stdio.h>


int main()
{
    int number[10];
    int i,j;
    int min,max,temp;

    for(i=0;i<10;i++)
    {
        printf("Enter any 10 int Numbers:");
        scanf("%d",&number[i]);
    }

    min = number[0];
    max = number[0];

    for(i=0;i<10;i++)
    {
        if(number[i]>max)
        {
            max = number[i];
        }

        if(number[i]<min)
        {
            min = number[i];
        }
    }

    printf("Max Value:- %d\n",max);
    printf("Min Value:- %d\n",min);


    // calculating mean

    int sum = 0;
    for(i=0;i<10;i++)
    {
        sum += number[i];
    }

    printf("Sum of 10 Integer number:%d\n",sum);

    float mean = (float)sum/10;

    printf("Arithmetic Mean:%.2f\n",mean);

    // sorting array

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (number[i] > number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("Sorted Numbers in ascending order \n");

    for(i=0;i<10;i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");

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
