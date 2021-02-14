#include <stdio.h>
//#include <conio.h>

int main()
{

    //clrscr();

    char grade;
    int total_marks;

    printf("Enter total marks scored by the student: ");
    scanf("%d", &total_marks);

    // 91 <= total_marks <= 100
    if( 91 <= total_marks && total_marks <= 100 )
    {
        grade = 'O' ;
    }

    if( 81 <= total_marks && total_marks <= 90 )
    {
        grade = 'E' ;
    }

    if( 71 <= total_marks && total_marks <= 80 )
    {
        grade = 'A' ;
    }

    if( 61 <= total_marks && total_marks <= 70 )
    {
        grade = 'B' ;
    }

    if( 51 <= total_marks && total_marks <= 60 )
    {
        grade = 'C' ;
    }

    if( total_marks <= 50 )
    {
        grade = 'F' ;
    }

    printf("\nGrade Obtained: %c", grade);

    //getch();

    return 0;
}
