#include <stdio.h>
// #include <conio.h>


// Odd number series is an A.P.  HOW ? 1, 3, 5, 7, .....  i.e. first term = a = 1, common diff = 2 , Nth term = a + (n-1)d where n is number of terms
// SUM of n terms = n ( 2a + (n-1)d) / 2

int main()
{
    // clrscr();

    // SUM OF ODD NUMBERS SERIES UPTO A GIVEN NUMBER - APPROACH 2

    int terms_count;

    printf( "Enter number of terms in the series: ");
    scanf( "%d", &terms_count);

    // int sum = ( terms_count * ( 2 * 2 + (terms_count-1) * 2 ) ) / 2

    // HERE, in odd number series, a = 1, d = 2, therefore, Sum = n * n

    int sum = terms_count * terms_count ;
    printf( "Sum is %d", sum);
    
    // getch();
    return 0;
}

