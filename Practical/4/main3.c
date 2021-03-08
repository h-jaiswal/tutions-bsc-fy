#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = 1;

    if( num >= 1 )
    {
        for(int i = num; i >= 1; i-- )
        {
            result = result * i;
        }
    }

    printf("FACTORIAL of %d is %d", num, result);
    return 0;
}
