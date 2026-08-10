//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main(){
    int a;
    int b;
     printf("Dear user enter your first number:");
    scanf("%d",&a);
     printf("Dear user enter your second number:");
    scanf("%d",&b);
    
    printf(" Sum=%d",a+b);
    printf(" Difference=%d",a-b);
    printf(" Product=%d",a*b);
    printf(" Quotient=%d",a/b);
    return 0;
}

    
