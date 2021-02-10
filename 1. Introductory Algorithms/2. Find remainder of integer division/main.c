// Find remainder of int division

#include <stdio.h>
// #include <conio.h> // Only on Turbo C

int main()
{
   // clrscr(); // Turbo C

    int dividend;
    printf("Enter Dividend: ");
    scanf("%d", &dividend); // %d is a placeholder for integer values

    int divisor;
    printf("Enter Divisor: ");
    scanf("%d", &divisor); // %d is a placeholder for integer values

    int quotient;
    int remainder;

    quotient = dividend / divisor;
    remainder = dividend - quotient * divisor;

    //int quotient = dividend / divisor;
    //int remainder = dividend - quotient * divisor;

    printf("Remainder of %d divided by %d is %d.", dividend, divisor, remainder );

   // getch(); // Turbo C
   return 0;
}
