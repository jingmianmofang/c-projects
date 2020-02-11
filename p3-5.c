//编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。
#include<stdio.h>
int main(){
    int a=5;
    int b=6;
    int c=8;
    int g=6;
    int d,e,f,h;
    d=(a==b);
    e=(a<=b);
    f=(a>=b);
    h=(b==g);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d",h);
    return 0;
}