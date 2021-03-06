/*

______121______ 6 (7 - 1) spaces 1 upto 2 (1 + 1) then downto 1 - LINE 1
_____12321_____ 5 (7 - 2) spaces 1 upto 3 (2 + 1) then downto 1 - LINE 2
____1234321____ 4 (7 - 3) spaces 1 upto 4 (3 + 1) then downto 1 - LINE 3
___123454321___ 3 (7 - 4) spaces 1 upto 5 (4 + 1) then downto 1 - LINE 4
__12345654321__ 2 (7 - 5) spaces 1 upto 6 (5 + 1) then downto 1 - LINE 5
_1234567654321_ 1 (7 - 6) spaces 1 upto 7 (6 + 1) then downto 1 - LINE 6
123456787654321 0 (7 - 7) spaces 1 upto 8 (7 + 1) then downto 1 - LINE 7

*/

int main()
{
    int totallines;
    printf("Enter number of lines to print: ");
    scanf("%d", &totallines);

    // Pattern
    for( int i=1 ; i <= totallines; i++ )
    {
        // In the i th line

        // print spaces
        for( int j = 1; j <= totallines-i; j++)
        {
            printf(" ");
        }

        // print numbers from 1 upto i+1
        for( int j = 1; j <= i+1; j++)
        {
            printf("%d", j);
        }

        // print numbers from i down to 1
        for( int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        // Printing new line
        printf("\n");
    }

    return 0;
}
