#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore: a is %d and b is %d.", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter: a is %d and b is %d.", a, b);

    return 0;
}
