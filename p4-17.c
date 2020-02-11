/*编写一段程序，显示1到n的整数值的二次方。*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int i=1;
    int a;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    printf("1到n的二次方有：\n");
    for(i=1;i<=n; i++){
        a=pow(i,2);
        printf("%d ",a);
    }
    return 0;

}