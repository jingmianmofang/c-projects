/*对代码淸单4-17中的程序进行修改，显示出一个横向较长的长方形
※读取两个边的边长，以较小的数作为行数，以较大的数作为列数。*/
/*
画一个长方形
*/
#include <stdio.h>
int main(void)
{
    int i , j;
    int height, width;
    int length;
    puts("让我们来画一个长方形。");
    printf("高："); scanf("%d", &height);
    printf("宽："); scanf("%d", &width);
    
     if(height>width)
      {
        length=height;
        height=width;
        width=length;
      }
    
    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}