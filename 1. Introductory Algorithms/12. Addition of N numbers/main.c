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

     while ( count > 0 )
     {
        printf("Enter value: ");
        scanf("%d", &value);
        sum = sum + value;

        count = count - 1;
     }


    printf("Sum of given numbers is : %d", sum);

    // getch();
    return 0;
}
