//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value for first number=");
    scanf("%d",&a);
    printf("Enter value for second number=");
    scanf("%d",&b);
    int option;
    printf("Enter function number(1-5)=");
    scanf("%d",&option);
    switch (option) {
    case 1: printf("a+b= %d",a+b); break;
    case 2: printf("a-b= %d",a-b); break;
    case 3: printf("a*b= %d",a*b); break;
    case 4: printf("a/b= %d",a/b); break;
    case 5: printf("a%b= %d",a%b); break;
    
    default: printf("Invalid number! Enter a number from 1 to 5.\n");
    }

    return 0;
}

