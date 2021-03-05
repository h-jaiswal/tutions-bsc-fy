#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int is_prime = 1; // Assume, 1 means prime/true and 0 means non-prime/false
    for( int i = 2; i <= num-1; i++)
    {
        if( num % i == 0)
        {
            is_prime = 0; // non-prime
            break;
        }
    }

    if( num == 1)
    {
        is_prime = 0; // 1 is not prime.
    }

    if ( is_prime == 1)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is a not prime number.", num);
    }
    return 0;
}
