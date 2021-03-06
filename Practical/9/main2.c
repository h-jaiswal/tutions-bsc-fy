/*
    THIS IS A MULTILINE COMMENT, IT WILL  BE IGNORED BY THE COMPILER

    FIBONACCI SERIES ( every term is sum of prev two terms except first and second term )
    -> 0 1
    -> 0 1 1
    ->   1 1 2
    ->     1 2 3
    ->       2 3 5

    ie series->  0 1 1 2 3 5..........
*/

#include <stdio.h>

int main()
{
    int n1 = -1;
    int n2 = 1;

    int totalterms;

    printf("Enter total number of terms: ");
    scanf("%d", &totalterms);

    while( totalterms > 0)
    {
        int term = n1 + n2;
        printf("%d ", term);

        n1 = n2;
        n2 = term;

        totalterms--;
    }
    return 0;
}

