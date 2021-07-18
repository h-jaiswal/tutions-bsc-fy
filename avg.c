#include <stdio.h>
#include <stdlib.h> // standard library header file, contains malloc()


int main()
{
    int n;

    printf("Enter total count of numbers: ");
    scanf("%d", &n);

    int * num = (int *) malloc(sizeof(int) * n);   // malloc() is used of Memory Allocation

    # num is a dyanmic array of int type


    # getting n numbers from user using for loop
    for(int i=0; i<n ; i++)
    {
        printf("Enter no #%d : ", (i+1));

        scanf("%d", &num[i]);
    }

    float sum = 0;
    for(int i=0; i<n ; i++)
    {
        sum = sum + num[i];
    }

    printf("Sum is %f", sum);

    float avg = sum / n;

    printf("Average is %f", avg);

}
