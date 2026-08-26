//Q33: Write a program to check if a number is an Armstrong number.
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
       rev=rev+(d*d*d);
       temp=temp/10; 
    }
    printf("The reversed number is=%d",rev);
    if (rev==n)
    printf("\nnumber is armstrong");
    else
    printf("\nnumber is not armstrong");
    return 0;
}

