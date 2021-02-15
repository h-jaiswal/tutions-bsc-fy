#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int upper_limit;

    printf("Please enter a upper limit up to which we need to identify even-odds: ");
    scanf("%d", &upper_limit);

    int num  = 1;

    while( num <= upper_limit )
    {
        int rem = num % 2;

        if( rem == 0 )
        {
            printf( "%d is Even.\n", num);
        }
        else
        {
            printf( "%d is Odd.\n", num);
        }

        num = num + 1;
    }

    // getch();
    return 0;
}
