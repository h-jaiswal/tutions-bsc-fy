#include <stdio.h>

// #include <conio.h>

int main()
{
    int num;

    printf("Enter a number ( >0 ) : ");
    scanf("%d", &num);

    // Divisor of a given number 'n' can range from 1 to n

    // Out of these, those divisor that completely divide the number 'n' ( ie remainder = 0 ) are called FACTORS of that numeber 'n'

    int factor;
    int count = 0;


    int divisor = 1;
    while ( divisor <= num )
   {
        int remainder = num % divisor;

        if ( remainder == 0)
        {
            count = count + 1;
            factor = divisor;
            printf("Factor #%d : %d\n", count, factor);
        }
        divisor = divisor + 1;
    }


    /*
    for( int i = 1; i <= num; i = i+1 ) // Divisor of a given number 'n' can range from 1 to n
    {
        int remainder = num % i;
        if ( remainder == 0)
        {
            count = count + 1;
            factor = i;
            printf("Factor #%d : %d\n", count, factor);
        }
    }

    */

    printf( "Total number of factors of %d is %d", num, count );
}
