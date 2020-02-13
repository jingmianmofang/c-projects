/*编写一段程序，读取数组中的数据个数和元素值并显示。
显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。*/
#include<stdio.h>
#define NUM 99
int main(void){
    int v[NUM];
    int i;
    int n;
    do{
    printf("请输入数组个数：");
    scanf("%d",&n);
    }while(n<=0||n>99);
    for(i=0;i<n;i++){
        printf("v[%d]:",i);
        scanf("%d",&v[i]);
        printf("\n");
    }
    printf("{");
    for(i=0;i<n;i++){
    printf("%d,",v[i]);
    putchar(' ');
    }
    printf("}");
}