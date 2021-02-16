#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    // SUM OF NATURAL NUMBERS SERIES UPTO A GIVEN NUMBER

    int upper_bound = 0;
    int sum = 0;

    printf("Sum of natural numbers upto ? : ");
    scanf("%d", &upper_bound);

    for( int num = 1 ; num <= upper_bound ; num = num + 1 )
    {
        sum = sum + num;
    }

    printf( "Sum is %d", sum);
    // getch();
    return 0;
}
