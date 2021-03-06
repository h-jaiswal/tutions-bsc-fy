// digit by digit means -> 456 ->  units ie 6, tens ie 5, hund. ie 4

#include <stdio.h>

int main()
{
    int num;

    printf( "Enter a number: ");
    scanf("%d", &num);

    int tempnum = num; // store original num as the while loop is changing num in each run

    while( num > 0)
    {
        int digit = num % 10;

        printf("%d\n", digit);
        num = num / 10;
    }

    num = tempnum; // restore original num
    printf("%d", num);
    return 0;
}
