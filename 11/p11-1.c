/*将代码清单11-3中对p的赋值进行如下修改。
p = "456" + 1;*/
/*
    用指针实现的字符串的改写
*/
#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456"+1;/*OK!*//*可以为指向字符串字面量（中的字符）的指针赋上指向别的字符串字面量（中的字符）的指针。
    赋值后，指针指向新的字符串字面量（中的字符）。*/
    printf("p = \"%s\"\n", p);
    /*指一开始指向数组零位置的1，后来指针改变指向4，加一其实是指向数组一位置，也就是
    “5”的位置，通过指针输出“56”**/
    return 0;
}