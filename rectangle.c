//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int breadth;
    int length;
    int area;
    int perimeter;
    printf("Dear user enter breadth of rectangle:");
    scanf("%d", &breadth);
    
    printf("Dear user enter area of rectangle:");
    scanf("%d", &area);

    length=area/breadth;

    perimeter=2*(length+breadth);
    
    printf("length of rectangle is %d\n",length );
    printf("Perimeter of rectangle is %d",perimeter );
    return 0;
} 
    