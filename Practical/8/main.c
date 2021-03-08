/*
Factorial using recursion i.e. not using for loop or any loop

0! = 1

1! = 1

2! = 2 X 1 = 2

3! = 3 X 2 X 1 = 6

4! = 4 X 3 X 2 X 1  = 24 And so on

    ->  4! = 4 X 3! = 4 x 6 = 24  RECURSIVE DEFINITION OF FACTORIAL

n-1 !   =  n-1 X n-2 X ................ X 2 X 1

n! = n X n-1 X n-2 X ................ X 2 X 1


n! = n X (n-1)! RECURSIVE DEFINITION OF FACTORIAL


2! = 2 x 1!

1! = 1 x 0!

0! = 0 x (-1)! BUT (-1) IS NOT DEFINED => THIS MEANS RECURSIVE DEFI. DOES NOT WORK FOR N = 0,  N = 0 IS OUR BASE CASE

*/


#include <stdio.h>

int factorial(int num)
{
    int result;

    if( num == 0 )
    {
        result = 1;
        return result;
    }

    result = num * factorial( num-1 );

    return result;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("FACTORIAL of %d is %d", num, result);
    return 0;

}
