#include <stdio.h>
int count=100;
void show(){
    int count=8;
    printf("local:%d\n",count);

}
int main() {
    show();
    printf("global:%d\n",count);
    return 0;
} 
