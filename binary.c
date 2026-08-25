//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n,temp,rem;
    int b=0,a=1;
    printf("enter number to convert=");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%2;
        b=b+rem*a;
        a=a*10;
        temp=temp/2;
    }
    printf("binary=%d",b);
    return 0;
}
