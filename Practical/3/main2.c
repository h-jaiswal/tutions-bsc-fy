#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ( a > b && a > c )  // && means AND , || means OR , ! means NOT
    {
        printf("%d", a);
    }
    else if ( b > a && b > c )
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    // getch();
    return 0; // return 0 implies a successful execution of the program. If any value other than 0 gets returned it implies that there has been some runtime error.
