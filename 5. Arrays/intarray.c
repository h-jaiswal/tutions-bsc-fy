#include <stdio.h>

int main()
{
    // Always know number of elements/items
    // marks of 7 subjects

    int marks[7]; // declare an array of int type with capacity 7

    // to access first item, the index value is one less, ie 0

    // first element
    marks[0] = 89;
    
    // second element

    marks[1] = 90;

    marks[2] = 87;

    marks[3] = 86;

    marks[4] = 90;

    // index 5 and index 6 are not set yet

    // size of array -> number of set elements

    printf("%d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4], marks[5]);
    
}