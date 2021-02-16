#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int count ;

    printf( "Enter the count of numbers: " );
    scanf( "%d", &count );

    int value;
    int sum = 0;


    for( int i = count ; i > 0 ; i = i - 1 )
    {
        printf("Enter value: ");
        scanf("%d", &value);
        sum = sum + value;
    }

    printf("Sum of given numbers is : %d", sum);

    // getch();
    return 0;
}

