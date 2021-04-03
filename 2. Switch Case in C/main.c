#include <stdio.h>

int main()
{
    char grade;

    grade = getchar();
    // scanf("%c", &grade);

    switch (grade)
    {
    case 'A' :
        puts("God, How you scored so well.");
        puts("\nWell done.");
        break;
    case 'B':
        puts("You got B.");
        break;
    case 'C':
        break;
    case 'D':
        puts("D boy.");
        break;
    case 'E':
        puts("Don't even start!");
        break;
    default:
        puts("Invalid Grade");
    }

    puts("Program Over");
    return 0;
}
