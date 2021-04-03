#include <stdio.h>

int main()
{
    char name[100];   // capacity 100

    name[0] = 'E';
    name[1] = 's';
    name[2] = 'h';
    name[3] = 'a';
    name[4] = '\0'; // Null character ie '\0' needs to be setin this manner for char arrays

    char name2[] = { 'E', 's', 'h', 'a', '\0'};  

    char name3[5] = { 'E', 's', 'h', 'a', '\0'};

    char name4[] = "Esha";  // BEST
 
    printf("ALL STRINGS: ");
    printf("\n%s", name );
    printf("\n%s", name2 );
    printf("\n%s", name3 );
    printf("\n%s", name4 );

    return 0;
}