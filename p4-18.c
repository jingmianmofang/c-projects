/*编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行*/
#include <stdio.h>
int main()
{
    int i, a, b, n;
    do
    {
        printf("请输入一个正整数：");
        scanf("%d", &n);
    } while (n <= 0);
    a=0;
    for (i = 0; i < n; i++)
    {
        printf("*");
        a++;
        if(a%5==0){
            printf("\n");
        }

    }
    return 0;
}
