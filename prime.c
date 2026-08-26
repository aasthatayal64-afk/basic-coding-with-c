//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter number to check=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    
    if(count==2)
    printf("number is  a prime number");
    else
    printf("number is not a prime number");
    return 0;
}