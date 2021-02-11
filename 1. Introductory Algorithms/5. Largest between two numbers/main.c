#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int a;
    int b;

    printf("Enter 2 numbers (space separated) : ");
    scanf("%d %d", &a, &b);

    if( a >= b)
    {
        printf("%d is largest", a);
    }
    if ( b >= a)
    {
        printf("%d is largest", b);
    }
    
    // getch();
    return 0;
}
