/*请定义一个函数式宏diff(x,y)，返回x、y二值之差。*/
#include<stdio.h>
#define diff(x,y) (x)>(y)?((x)-(y)):((y)-(x))
int main(void){
    printf("%d", diff(8,54));
    return 0;
}