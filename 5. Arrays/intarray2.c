#include <stdio.h>

int main()
{
    int marks[100]; // Capacity - 100 representing 100 students

    int num_of_students;
    printf("Enter number of students: ");
    scanf("%d", &num_of_students);

    for (int i = 0; i < num_of_students; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < num_of_students; i++)
    {
        printf("\nMarks of Student #%d = %d", i+1, marks[i] );
    }
    
    return 0;
}
