#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a > b)
    {
        if ( a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if ( b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }


    // getch();
    return 0;
}
