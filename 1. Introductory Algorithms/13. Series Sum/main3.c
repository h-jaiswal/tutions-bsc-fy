#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    // SUM OF ODD NUMBERS SERIES UPTO A GIVEN NUMBER - APPROACH 1

    int upper_bound = 0;
    int sum = 0;

    printf("Sum of odd numbers upto ? : ");
    scanf("%d", &upper_bound);

    for( int num = 1 ; num <= upper_bound ; num = num + 1 )
    {
        if ( num % 2 == 1 )  // OR num % 2 != 0    BOTH means ODD
        {
            sum = sum + num;
        }
    }

    printf( "Sum is %d", sum);
    // getch();
    return 0;
}

