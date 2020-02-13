#include<stdio.h>
int main(){
    int a,b;
    int c,d;
    printf("输入两个整数：");
    scanf("%d\n%d",&a,&b);
    c=a+b;
    d=a*b;
    printf("a与b的和是%d\n",c);
    printf("a与b的积是%d",d);
    return 0;
}