
#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest;

    if( a > b && a > c)
    {
            largest = a;
    }
    else if ( b > c )
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    printf("%d", largest);

    // getch();
    return 0;
}
