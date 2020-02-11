#include<stdio.h>
int main(){
    int a,b;
    printf("整数A是：");
    scanf("%d",&a);
    printf("整数B是：");
    scanf("%d",&b);
    if(a>=b)
    {
        if(a==b)
        puts("A与B相等");
        else
            puts("A大于B");
    }
    else
    {
        puts("A小于B");
    }
    return 0;
}