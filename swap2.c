//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>

int main(){
    int a;
    int b;
     printf("Dear user enter your first number:");
    scanf("%d", &a);
    
    printf("Dear user enter your second number:");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
} 

