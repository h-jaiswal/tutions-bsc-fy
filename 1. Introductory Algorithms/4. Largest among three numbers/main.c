#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int a;
    int b;
    int c;

    printf("Enter 3 numbers (space separated) : ");
    scanf("%d %d %d", &a, &b, &c);

    if( a >= b && b >= c )
    {
        printf("%d is largest", a);
    }
    if ( b >= c && b >= a )
    {
        printf("%d is largest", b);
    }
    if ( c >= a && c >= b )
    {
        printf("%d is largest", c);
    }
    // getch();
    return 0;
}
