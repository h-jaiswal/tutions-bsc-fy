#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("Enter a number ( >0 ) : ");
    scanf("%d", &num);

    // If any divisor from 2 to n-1 is a factor then it is not prime

    int isPrime = 1;

    for ( int i = 2; i <= num-1; i ++ )
    {
        if ( num % i == 0 )
        {
            isPrime = 0;
            break;
        }
    }    
}