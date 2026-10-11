//Q104 — Pivot Integer
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int answer = -1;

    for(int x = 1; x <= n; x++)
    {
        int left = 0;
        int right = 0;

        for(int i = 1; i <= x; i++)
            left = left + i;

        for(int i = x; i <= n; i++)
            right = right + i;

        if(left == right)
        {
            answer = x;
            break;
        }
    }

    printf("%d", answer);

    return 0;
}