//Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100];
    int i, j;
    int start = 0, count = 0, max = 0;

    gets(str);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;

                for(j = 0; j < count; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            count = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("%s", longest);

    return 0;
}