#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d;
    int original;
    int temp;
    int ascending,descending;
    int difference;
    int repeat=0;
    printf("enter 4 digit number=");
    scanf("%d", &original);
    if(original<1000 || original>9999)
    {
    printf("invalid,Please enter 4 digit number");
    return 0; 
    }
    while(original!=6174)
    {
    temp=original;
    
    
        a=temp%10;
        temp=temp/10;
        b=temp%10;
        temp=temp/10;
        c=temp%10;
        temp=temp/10;
        d=temp%10;
        if(a==b && b==c && c==d && a==d)
        {
            printf("invalid,pls do not repeat digits");
            return 0;
        }

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if(a>d)
        {
            temp=a;
            a=d;
            d=temp;
        }
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        if(b>d)
        {
            temp=b;
            b=d;
            d=temp;
        }
        if(c>d)
        {
            temp=c;
            c=d;
            d=temp;
        }
        ascending=a*1000+b*100+c*10+d*1;
        descending=d*1000+c*100+b*10+a*1;
        difference=abs(descending-ascending);
       
        original=difference;
        repeat++;
        printf("repeat=%04d\n",repeat);
        printf("descending=%04d\n",descending);
        printf("ascending=%04d\n",ascending);
        printf("difference=%04d\n",difference);

    }

        
return 0;
    
}