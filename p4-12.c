/*编写一段程序，读取一个正整数，显示其位数。*/
#include<stdio.h>
int main(){
    int a,b;
    int i=1;
    do{
        printf("请输入一个正整数：");
        scanf("%d",&a);
    }while(a<=0);
   // printf("%d",b);
   while((a/10)!=0){
        a=a/10;
        i++;
    }
    printf("这个数字的位数是：%d",i);
    return 0;
}