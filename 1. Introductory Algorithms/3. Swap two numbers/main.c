// SWAP two numbers
#include <stdio.h>
// #include <conio.h> // Turbo C

int main()
{
    // clrscr(); // Turbo C

    int num1;
    int num2;

    //printf("Enter number 1: ");
    //scanf("%d", &num1);

    //printf("Enter number 2: ");
    //scanf("%d", &num2);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d.\n", num1, num2);  // \n is a special character for newline. it's called an escape sequence for newline

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d.", num1, num2);

    //  getch(); // Turbo C
    return 0;
}
