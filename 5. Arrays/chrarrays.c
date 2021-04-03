#include <stdio.h>


// %s is for characters or string
int main()
{
    // char standard = '11';
    int standard = 11;
    char section[10]; // Capacity

    int n; 

    printf("Enter number of friends: ");
    scanf("%d", &n);

    // scan elements into section array from item 1 (index 0) to item n (index n-1)

    for (int i = 0; i < n; i++)
    {
        printf("Enter section(A, B or C) for friend #%d: ", i+1);
        scanf("%s", &section[i]);
    }
    
    // print elements of section array from item 1 (index 0) to item n (index n-1)
    for (int i = 0; i < n; i++)
    {
        printf("%s ", section[i]);
    }
    
     
    return 0;
}
