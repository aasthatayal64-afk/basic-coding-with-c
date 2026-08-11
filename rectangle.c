//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int a;
    int b;
    int area;
    int perimeter;
     printf("Dear user enter leangth of rectangle:");
    scanf("%d", &a);
    
    printf("Dear user enter width of rectangle:");
    scanf("%d", &b);

    area=a*b;

    perimeter=2*(a+b);
    
    printf("Area of rectangle is %d",area );
    printf("Perimeter of rectangle is %d",area );
    return 0;
}
    