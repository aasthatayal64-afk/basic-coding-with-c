//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i, j, n, flag = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    n = strlen(a);

    if(n != strlen(b))
    {
        printf("Not rotation");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        flag = 1;

        for(j = 0; j < n; j++)
        {
            if(a[(i + j) % n] != b[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            break;
    }

    if(flag == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}