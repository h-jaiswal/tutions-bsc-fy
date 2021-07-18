#include <stdio.h>

int main()
{
    int total_persons = 0;
    do
    {
        printf("Hi, \n\nHow many people with you?: ");
        scanf("%d", &total_persons);

        total_persons++;
    }while( total_persons % 2 == 0 );


    return 0;
}
