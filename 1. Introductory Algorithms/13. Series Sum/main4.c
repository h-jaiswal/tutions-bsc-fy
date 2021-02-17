#include <stdio.h>
// #include <conio.h>


// Even number series is an A.P.  HOW ? 2, 4, 6, 8, .....  i.e. first term = a = 2, common diff = 2 , Nth term = a + (n-1)d where n is number of terms
// SUM of n terms = n ( 2a + (n-1)d) / 2
// for even series SUM = n * ( n + 1 )

int main()
{
    // clrscr();

    // SUM OF EVEN NUMBERS SERIES UPTO A GIVEN NUMBER - APPROACH 2

    int terms_count;

    printf( "Enter number of terms in the series: ");
    scanf( "%d", &terms_count);

    // int sum = ( terms_count * ( 2 * 2 + (terms_count-1) * 2 ) ) / 2

    // HERE, in even number series, a = 2, d = 2, therefore, Sum = n ( n + 1)

    int sum = terms_count * ( terms_count + 1 );
    printf( "Sum is %d", sum);

    // getch();
    return 0;
}

