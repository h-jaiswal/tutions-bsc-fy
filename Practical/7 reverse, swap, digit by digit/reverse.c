#include <stdio.h>

int main()
{
    int num;

    printf( "Enter a number: ");
    scanf("%d", &num);

    int tempnum = num; // store original num as the while loop is changing num in each run
    int rev = 0;
    while( num > 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    num = tempnum; // restore original num
    printf("NUMBER : %d \nREVERSE: %d", num, rev );
    return 0;
}
