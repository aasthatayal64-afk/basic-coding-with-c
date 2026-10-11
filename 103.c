//Q103 — Pivot Index
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int index = -1;

    for(int i = 0; i < n; i++)
    {
        int left = 0;
        int right = 0;

        for(int j = 0; j < i; j++)
            left = left + nums[j];

        for(int j = i + 1; j < n; j++)
            right = right + nums[j];

        if(left == right)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}