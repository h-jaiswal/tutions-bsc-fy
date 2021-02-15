#include <stdio.h>   // Standard Input/Output -> contains printf() and scanf()

//#include <conio.h>  // Console Input/Output -> contains clrscr() and getch()

int main()
{
    //clrscr();

    int num;
    printf("Please enter a number (>0) : ");
    scanf("%d", &num);

    int quotient;
    int remainder;
    int dividend = num;

    while ( dividend > 0 )
    {
        quotient = dividend / 10;
        remainder = dividend - 10 * quotient;  // rem = dividend - (divisor * quotient)

        printf("%d\n", remainder);

        dividend = quotient;
    }

    // getch();

    return 0;
}
