#include <stdio.h>

int main()
{
    char name[100];   // capacity 100

    printf("Enter name: ");
    scanf("%s", name);  // in case of char array string input name without & 
    

    printf("Hi %s.", name);
    return 0;
}