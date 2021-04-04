#include <stdio.h>
#include <string.h> // has functions ex. strcpy(), etc... 

int main()
{
    char firstname[100];   // capacity 100

    // char firstname[100] = "Esha";   // capacity 100  ALLOWED
    // firstname = "Harshit";   // NOT ALLOWED 

    char lastname[100];   // capacity 100

    

    printf("Enter name: ");
    scanf("%s %s", firstname, lastname);  // in case of char array string input name without & 

    printf("Hi %s %s.", firstname,lastname);

    // firstname = "Harshit";   NOT ALLOWED

    strcpy(firstname, "Harshit");

    // lastname = "Jaiswal";   NOT ALLOWED
 
    strcpy(lastname, "Jaiswal");

    printf("\nHi %s %s.", firstname,lastname);


    return 0;
}