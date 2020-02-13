/*使用代码清单6-3中的sgr函数创建另一个函数，返回int型整数的四次幂。
int pow4(int x){.....}*/
#include <stdio.h>
int pow4(int x){
    return x*x*x*x;
}
int main(void)
{
    int x;
    int y;
    puts("请输入一个整数。");
    scanf("%d",&x);
    y=pow4(x);
    printf("x的四次幂是：%d",y);
    return 0;
}