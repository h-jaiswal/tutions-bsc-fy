#include <stdio.h>

int main()
{
    char message[100];



    // Input a complete line/sentence in a single array

    gets(message);
    
    printf("The message is: %s" , message);
    return 0;
}