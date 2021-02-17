#include <stdio.h>
// #include <conio.h>


// Natural  number series is an A.P.  HOW ? 1, 2, 3, 4 .....  i.e. first term = a = 1, common diff = 1 , Nth term = a + (n-1)d where n is number of terms
// SUM of n terms = n ( 2a + (n-1)d) / 2
// Sum = n * (n + 1) / 2,    n is the total number of terms

int main()
{
    // clrscr();

    // SUM OF Natural NUMBERS SERIES UPTO A GIVEN NUMBER - APPROACH 2

    int terms_count;

    printf( "Enter number of terms in the series: ");
    scanf( "%d", &terms_count);

    // int sum = ( terms_count * ( 2 * 2 + (terms_count-1) * 2 ) ) / 2

    // HERE, in odd number series, a = 1, d = 1, therefore, Sum = n * (n + 1) / 2

    int sum = terms_count * ( terms_count + 1 ) / 2 ;
    printf( "Sum is %d", sum);
    
    // getch();
    return 0;
}

