/*Q114: Write a program to take a string s as input. The task is to find the length of the longest 
substring without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int count, max = 0;
    int repeat;

    printf("Enter string: ");
    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        count = 0;

        for(j = i; j < strlen(s); j++)
        {
            repeat = 0;

            // Check if s[j] has already occurred
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;

            if(count > max)
                max = count;
        }
    }

    printf("Length of longest substring = %d", max);

    return 0;
}