/*● 练习 6-2
创建一个函数，返回三个int型整数中的最小值。
int min3(int a,int b,int c){...}*/
#include<stdio.h>
int min3(int a,int b,int c);
int main(){
    int min;
    int c,d,e;
    printf("请输入三个整数：");
    scanf("%d %d %d",&c,&d,&e);
    min=min3(c,d,e);
    printf("三者中较小的一者是：%d\n",min);
    return 0;
}
int min3(int a,int b,int c){
    int minny;
    minny=a;
    if(b<minny){
        minny=b;
    }
    if(c<minny){
        minny=c;
    }
    return minny;
}