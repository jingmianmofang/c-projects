//代码清单3-9是判断所输入的整数值的符号的程序，请将其改写为可以将输入显示这一过程循环任意次。
#include <stdio.h>
int main(void)
{
    int no;
    int c;
    do{
    printf("请输入一个整数：");
    scanf("%d", &no);
    if (no == 0)
        puts("该整数为0");
    else if (no > 0)
        puts("该整数为正数");
    else
        puts("该整数为负数");
        printf("是否继续判断：【0.....继续/9.......停止】");
        scanf("%d",&c);
    }while(c==9);
    return 0;
}