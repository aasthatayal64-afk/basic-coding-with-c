#include<stdio.h>

int main(){
    //data_types variable_name

    int age; //for age variable
    char (name[25]); // for name

    printf("Dear user enter your age:");
    scanf("%d", &age);
    
    printf("Dear user enter your name:");
    scanf("%s", &name);

    printf("your entered name is %s",name);
    printf("your entered age is %d",age);

}
