//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n;
    int temp;
    int rev=0;
    int d;
   
    printf("Enter number to reverse=");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
       d=temp%10;
       rev=(rev*10)+d;
       temp=temp/10; 
    }
    printf("The reversed number is=%d",rev);
    if (rev==n)
    printf("number is palindrome");
    else
    printf("number is not palindrome");
    return 0;
}
