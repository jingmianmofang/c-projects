#include<stdio.h>
int main(){
    int a,b;
    float c;
    printf("输入两个整数：");
    scanf("%d\n%d",&a,&b);
    c=(float)a/b;
    printf("a是b的%.2f",c);
    return 0;
}