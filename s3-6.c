//编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。
/*1 4      计算1+2+3+4*/
#include<stdio.h>
int main(){
    int a,b;
    int sum=0;
    int x;
    printf("请输入第一个数：");
    scanf("%d",&a);
    printf("请输入第一个数：");
    scanf("%d",&b);
    x=a;
    do{
        sum=sum+x;
        x=x+1;
    }while(x<=b);
    printf("sum is %d",sum);
    return 0;
}