//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, first, last, place = 1, middle, result;
    printf("enter num="); 
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        place *= 10;
    }
    first = temp;
    middle = (num % place) / 10;
    result = last * place + middle * 10 + first;
    printf("%d", result);

    return 0;
}