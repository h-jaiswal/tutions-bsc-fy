#include <stdio.h>
#include <string.h> // MUST


int main()
{
    char myProductLabel[100] = "Garnier Mens";

    char actualProductLabel[100] = "Garnier Mens";

    // == NOT ALLOWED instead we strcmp()

    // strcmp( string1, string2 )

    // returns 0 if both are equal 

    // returns -1 if first is less

    // returns 1 if first is greater

    // if( strcmp( myProductLabel, actualProductLabel) ) 

    int result = strcmp( myProductLabel, actualProductLabel);

    if ( result == 0) 
    {
        printf("\nPurchase the product.");
    }
    else
    {
        printf("\nSkip the product.");
    }
    return 0;
}