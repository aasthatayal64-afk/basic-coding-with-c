//Q26: Write a program to print numbers from 1 to n.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter value of n=");
    scanf("%d",&n);
    i=1;
    while (i<=n){
    printf("%d\n",i);
    i++;
    }
    return 0;
    
}
