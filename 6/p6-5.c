/*创建一个函数，返回1到n之间所有整数的和。
int sumup(int n){...}*/
#include <stdio.h>
int sump(int n){
    return (1+n)*n/2;
}
int main(void)
{
    int x;
    int y;
    puts("请输入一个整数:");
    scanf("%d",&x);
    y=sump(x);
    printf("1到n的和是：%d",y);
    return 0;
}