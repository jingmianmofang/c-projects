/*现定义如下函数式宏，其功能为返回x、y中的较大值。
#define max(x,y) (((x)>(y))?(x):(y))
而下面两个使用了该宏的表达式的功能为计算a、b、c、d中的最大值。
max(max(a, b), max(c, d))
max(max(max(a, b), c), d)
请显示并观察它们是如何展开的。*/
#include<stdio.h>
# define max(x,y) ((x)>(y)?(x):(y))
int main(void){
    int a,b,c,d;
    int e,f;
    printf("请输入a:");scanf("%d",&a);
    printf("请输入b:");scanf("%d",&b);
    printf("请输入c:");scanf("%d",&c);
    printf("请输入d:");scanf("%d",&d);
    e=max(max(a, b), max(c, d));
    f=max(max(max(a, b), c), d);
    printf("%d\n",e);
    printf("%d\n",f);
    return 0;
}