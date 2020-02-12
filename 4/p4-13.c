/*编写一段程序，求1到n的和。n的值从键盘输入*/
#include<stdio.h>
int main(){
    int i=1;
    int n;
    int sum=0;
    do{
    printf("请输入一个正整数：");
    scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("1到n的和是：%d",sum);
    return 0;
}