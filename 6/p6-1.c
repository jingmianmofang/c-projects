/*创建一个函数，返回两个int型整数中较小一数的值。
int min2(int a,int b){...}*/
#include<stdio.h>
int min2(int a,int b);
int main(){
    int min;
    int c,d;
    printf("请输入两个整数：");
    scanf("%d %d",&c,&d);
    min=min2(c,d);
    printf("两者中较小的一者是：%d\n",min);
    return 0;
}
int min2(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
