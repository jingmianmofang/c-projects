//编写一段程序，显示出小于输入的整数的所有2的乘方。
#include<stdio.h>
#include<math.h>
int main(){
    int a;int i=0;int b=1;
    do{
    printf("请输入一个正整数：");
    scanf("%d",&a);
    }while(a<=0);
    do{
        printf("%d ",b);
        b=pow(2,++i);
    }while(b<a);
    printf("\n");
    return 0;
}