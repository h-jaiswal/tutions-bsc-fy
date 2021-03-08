/*
Factorial of a number ->

0! = 1

1! = 1

2! = 2 X 1 = 2

3! = 3 X 2 X 1 = 6

4! = 4 X 3 X 2 X 1  = 24 And so on

n! = n X n-1 X n-2 X ................ X 2 X 1
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = 1;

    if( num >= 1 )
    {
        for(int i = 1; i <= num; i++ )
        {
            result = result * i;
        }
    }

    printf("FACTORIAL of %d is %d", num, result);
    return 0;
}
