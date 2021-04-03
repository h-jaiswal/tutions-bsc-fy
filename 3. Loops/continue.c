// Program to explain working of continue statement


#include <stdio.h>
#include <conio.h>

int main()
{
    // clrscr();
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<= n; i++)
    {
        printf("\nStart of loop\n");

        printf("%d\n", i);
        if( i % 3 == 0)
        {
            continue; // If the loop condition is true, then continue statement is run, which skips further statements in the loop
        }

        printf("End of loop\n");
    }

    getch();

    return 0;
}
