#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    // SUM OF EVEN NUMBERS SERIES UPTO A GIVEN NUMBER - APPROACH 1

    int upper_bound = 0;
    int sum = 0;

    printf("Sum of even numbers upto ? : ");
    scanf("%d", &upper_bound);

    for( int num = 1 ; num <= upper_bound ; num = num + 1 )
    {
        if ( num % 2 == 0 )
        {
            sum = sum + num;
        }
    }

    printf( "Sum is %d", sum);
    // getch();
    return 0;
}

