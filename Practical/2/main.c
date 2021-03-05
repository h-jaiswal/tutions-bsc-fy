#include <stdio.h>

int main()
{
    int N; // N is number of prime nos. we need to print

    printf("Enter a value for N: ");
    scanf("%d", &N);

    int num = 1;
    while( N > 0 )
    {
        int is_prime = 1;
        for( int i = 2; i <= num-1; i++)
        {
            if( num % i == 0 )
            {
                is_prime = 0;
                break;
            }
        }
        if(num == 1)
        {
            is_prime = 0; // 0 means False here.
        }

        // checking if number is prime
        if( is_prime == 1)
        {
            printf("%d\n", num);
            N--;
        }

        num++; // updating number to next number
    }

    return 0;
}
