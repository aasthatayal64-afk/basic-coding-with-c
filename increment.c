#include <stdio.h>
int main() {
    int a=12;
    printf("post:%d\n",a++);
    printf("a now:%d\n",a);
    printf("pre:%d\n",++a);
    printf("a now:%d\n",a);
    printf("post:%d\n",a--);
    printf("a now:%d\n",a);
    printf("pre:%d\n",--a);
    printf("a now:%d\n",a);
    return 0;
} 