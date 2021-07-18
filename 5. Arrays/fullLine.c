#include <stdio.h> // contains gets, puts, scanf, printf, etc.

int main()
{
    char message[100];

    // Input a complete line/sentence in a single array

    puts("Enter a message: ");
    gets(message);
    
    puts(message);

    // printf("The message is: %s" , message);  // ALLOWED
    return 0;
}