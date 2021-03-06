/*

Take number of lines from user.

2
2 4
2 4 6
2 4 6 8

*/

#include <stdio.h>

int main()
{
    int lines;
    printf("Enter number of lines to print: ");
    scanf("%d", &lines);

    // Pattern
    for( int i=1 ; i <= lines; i++ )
    {
        // In the i th line

        // print the terms
        for( int j = 1; j <= i; j++ )
        {
            printf( "%d ", 2*j );
        }

        // Printing new line
        printf("\n");
    }
    return 0;
}
