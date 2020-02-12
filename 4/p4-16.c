/*编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。*/
#include<stdio.h>
int main(){
    int a;
    int i=1;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    printf("该整数以下的奇数是：\n");
    for(i=1;i<=a;i=i+2){
        printf("%d ",i);
    }
    return 0;

}