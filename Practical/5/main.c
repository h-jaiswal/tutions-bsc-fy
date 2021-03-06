// sum and avg of three real (decimal point number) number
#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;

    // float a, b, c;

    printf("Enter three real numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    float sum; // declaration
    sum = a + b + c;

    // int sum = a + b + c; // declaration and initialization on same line

    float avg;
    // avg = (a + b + c) / 3;  // Correct
    // avg = a + b + c / 3 // Will give wrong ans. Why? Because of BODMAS

    avg = sum / 3;

    printf("Sum is %f", sum);
    printf("\nAverage is %f", avg);

}
