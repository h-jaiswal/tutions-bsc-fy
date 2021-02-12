#include <stdio.h>

int main()
{
    int num;

    printf("Please enter a number:");
    scanf("%d", &num);

    int quotient = num / 2; 
    int remainder = num - 2 * quotient;

    if ( remainder == 0 )
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }

    return 0;
}