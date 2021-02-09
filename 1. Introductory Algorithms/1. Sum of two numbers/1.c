// Write the C code to input two numbers and output their sum.

#include <stdio.h>
// #include <conio.h>
int main()
{
    // clrscr();

    printf("Enter two numbers: ");

    int a;
    int b;
    int sum;

    scanf("%d %d", &a, &b);

    sum = a + b; // Assignment, same as in maths.

    printf("Sum of %d and %d is : %d", a, b, sum);

    // getch();
    return 0;
}
