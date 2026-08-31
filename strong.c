// Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0;
    printf("enter num=:");  
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}