/*
1
1 2
1 2 3
1 2 3 4
*/

#include <stdio.h>

int main()
{
    int lines = 4;

    for( int i = 1; i <= lines; i++ )
    {
        for( int j = 1; j <= i ; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
