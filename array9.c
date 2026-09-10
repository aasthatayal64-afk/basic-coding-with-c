//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};
    int digit, max = 0, ans = 0;

    scanf("%lld", &n);

    // Count frequency of each digit
    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}