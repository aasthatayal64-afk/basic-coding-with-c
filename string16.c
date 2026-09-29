//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, start;

    scanf(" %[^\n]", str);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            j = i - 1;

            while(start < j)
            {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}