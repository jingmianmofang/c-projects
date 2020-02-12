/*编写一段程序，按照升序显示出小于输入值的所有正偶数。*/
#include <stdio.h>
int main()
{
    int a, b = 2;
    printf("输入一个整数：\n");
    scanf("%d", &a);
    if (a < 0)
        a = -a;
    if (a % 2)
    {
        while (b <= a - 1)
        {
            printf("%d ", b);
            b = b + 2;
        }
    }
    else
    {
        while (b <= a)
        {
            printf("%d ", b);
            b = b + 2;
        }
    }
    return 0;
}