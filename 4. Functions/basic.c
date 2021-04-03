#include <stdio.h>

 // function definition
void print_age_in_words(int age_in_months)  // 1. function signature consist of return type, function name, with parameter(s)
{ // 2. function body
    switch (age_in_months)
    {
        case 1: printf("1  months.");
                break;
        case 3: printf("3  months.");
                break;
        case 6: printf("Half a year.");
                break;
        case 12: printf("1 Year");
                break;
        default: printf("Invalid Value.");

    }
}
int main()
{
    // Toddler

    int age_in_months = 0;

    printf("Enter age: ");
    scanf("%d", &age_in_months);

    print_age_in_words(age_in_months);  // function call with 1 argument
    print_age_in_words(6);
    print_age_in_words(3);
    return 0;
}

