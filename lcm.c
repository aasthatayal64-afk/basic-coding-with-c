//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, lcm;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf( "%d",&b);
    lcm = (a > b) ? a : b;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("%d", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}