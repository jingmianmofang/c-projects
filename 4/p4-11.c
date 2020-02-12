/*对代码清单4-10的程序进行修改，使其在显示结果的同时显示输入的整数值。*/
/*
逆向显示正整数
*/
#include <stdio.h>

int main(void)
{
    int no;int n1;

    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    } while (no <= 0);
    n1=no;
    printf("该整数逆向显示的结果是：");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }
    printf("。\n原输入的数是：%d。",n1);
    return 0;
}