/*创建函数put_count，显示被调用的次数(如下显示的是调用3次函数put_count的运行结果)
void put_count() {...}
put_count:第一次
put_count:第二次
put_count:第三次*/
#include<stdio.h>
void put_count();
int main(){
    int a;
    int i=0;
    printf("调用多少次put_count函数：");
    scanf("%d",&a);
    do{
    put_count();
    i++;
    }while(a>i);

    return 0;
}
void put_count(){
    static int i=1;
    printf("put_count:第%d次\n",i++);
}