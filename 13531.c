/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
#include <stdio.h>

int main()
{
    int i, j;

    // Increasing part: 1, 3, 5
    for(i = 1; i <= 5; i = i + 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    // Decreasing part: 3, 1
    for(i = 3; i >= 1; i = i - 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}



