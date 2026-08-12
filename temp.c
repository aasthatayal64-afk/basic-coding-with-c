//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float C;
    float F;
     printf("Dear user enter Fahrenheit Temp you want to convert :");
    scanf("%f", &F);
    
    C=(F-32)*5/9;
    printf("temperature in celsius is %f:",C);
}
