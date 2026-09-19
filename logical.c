#include <stdio.h>
int main() {
    int a=12;
    int b=2;
    printf("AND:%d\n",(a>0)&&(b>0));
    printf("OR:%d\n",(a>0)||(b>0));
    printf("NOT:%d\n",!(a>0));
    return 0;
}
