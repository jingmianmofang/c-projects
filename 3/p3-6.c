#include <stdio.h>

int main(void)
{
    int n1, n2, n3,max;

    puts("请输入三个整数：");
    puts("整数1："); scanf("%d", &n1);
    puts("整数2："); scanf("%d", &n2);
    puts("整数3："); scanf("%d", &n3);
    max=n1;
    if(n2>max){
        max=n2;
    }
    if(n3>max){
            max=n3;
    }
    printf("最大的数是%d。\n", max);
    return 0;
}