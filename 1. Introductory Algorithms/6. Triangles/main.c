#include <stdio.h>
// #include <conio.h>

int main()
{
    // clrscr();

    // print "Enter 3 sides: "

    // input a, b, c

    int a;
    int b;
    int c;

    printf( "Enter 3 sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // IF-ELSE LADDER nested inside of IF-ELSE
    if( a+b>c && b+c>a && a+c>b )
    {
        printf("Triangle can be drawn.\n");

        if( a == b && b == c )
        {
            printf("Equilateral Triangle.");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Scalene Triangle.");
        }
        else if ( a==b && b==c && c==a)
        {
            printf("Isosceles Triangle.");
        }
        else
        {
            printf("Any other triangle.");
        }
    }
    else
    {
        printf("Triangle cannot be drawn.");
    }




    // if a == b and b == c
        // then print "eq"
    // else
            // if a != b and b != c and c != a
                // then print "scalene"
    // else
            // if  a == b OR b == c OR c == a
                //  then print "isos"

    // getch();
    return 0;
}


