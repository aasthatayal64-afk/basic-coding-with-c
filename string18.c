//Q98: Print initials of a name with the surname displayed in full.


#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, last = 0;

    scanf(" %[^\n]", name);

    printf("%c ", name[0]);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ')
            last = i;
    }

    for(i = 0; i < last; i++)
    {
        if(name[i] == ' ')
            printf("%c ", name[i + 1]);
    }

    printf("%s", name + last + 1);

    return 0;
}