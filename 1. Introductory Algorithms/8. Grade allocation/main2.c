
#include <stdio.h>
//#include <conio.h>

int main()
{

    //clrscr();

    char grade;
    int total_marks;

    printf("Enter total marks scored by the student: ");
    scanf("%d", &total_marks);

    if( total_marks <= 100 )
    {
        if( total_marks >= 91 )
        {
            grade = 'O';
        }
        else if ( total_marks >= 81 )
        {
            grade = 'E';
        }
        else if ( total_marks >= 71 )
        {
            grade = 'A';
        }
        else if ( total_marks >= 61 )
        {
            grade = 'B';
        }
        else if ( total_marks >= 51)
        {
            grade = 'C';
        }
        else if ( total_marks >= 0 )
        {
            grade = 'F';
        }
    }

    printf("\nGrade Obtained: %c", grade);

    //getch();

    return 0;
}
