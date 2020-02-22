/*定义一个函数式宏swap(type，a，b)以使type型的两值互换。
例如:假设int型变量x、y的值分别为5、10,那么调用swap(int,x,y)后，
x、y中应分别保存10、5*/
#include<stdio.h>
#define swap(type,a,b) {type c=(b);(b)=(a);(a)=(c);printf("%d\n",a);printf("%d",b);}
int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    swap(int,a,b)   //不能加;符号
    return 0;
}