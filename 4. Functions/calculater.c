#include <stdio.h>

// void input(float * a, float * b) // Here, parameters are Pass by Reference
// {
//     printf("Enter two numbers: ");
//     scanf("%f %f", a, b);
// } 

float sum(float a, float b)
{
    return a + b;
}

float difference(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2;

    int choice = -1;
    float result;

    do
    {
        printf("************CALCULATOR MENU**************\n");

        // Input 
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        
        // Menu
        printf("1. Sum\n");
        printf("2. Difference\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter a choice (1-5) : ");
        scanf("%d", &choice);

        // Processing
        switch (choice)
        {
        case 1:
            result = sum(num1, num2);
            printf("Result: %f\n", result);
            break;
        case 2:
            result = difference(num1, num2);
            printf("Result: %f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %f\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Result: %f\n", result);
            break;
        case 5:
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }

    } while( choice != 5 );

    printf("Calculater stopped.\n");
    
}