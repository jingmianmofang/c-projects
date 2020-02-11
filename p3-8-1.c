#include <stdio.h>
int main(void)
{
    int n1, n2;
    int c;
    puts("请输入两个整数：");/**puts能自動換行，printf不能自动换行**/
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    if(n1>n2){
        c=n1-n2;
    }
    else
    {
        c=n2-n1;
    }
    printf("它们的差是%d。\n", c);
    return 0;
}