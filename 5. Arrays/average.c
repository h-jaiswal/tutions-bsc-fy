// Find average using arrays and function
// Passing array to a function as arguments
#include <stdio.h>

float findSum(float *values, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {   
        sum = sum + values[i]; 
    }

    return sum;
}

float findAverage(float *values, int n) // NOTE how arrays are written in parameters
{
    float sum = findSum(values, n);

    float average = sum/n;
    
    return average;
}

int main()
{
    // Input some numeric values from user and find it's average 

    // const int n = 10; // const means constant i.e. value of n cannot be changed
    // float values[n]; // n must be a const variable or a number like 10.

    float values[100];

    int n;  
    printf("Enter number of values to input (<=100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value number %d: ", (i+1));
        scanf("%f", &values[i]); // %f because float array
    }
    
    float average = findAverage( values, n ); // passing array and its size as argument

    printf("Average is: %f", average);
    return 0;
}