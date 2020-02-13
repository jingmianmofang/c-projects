#include<stdio.h>
int main(){
    int a,b;
    float c;
    printf("输入两个整数：");
    scanf("%d\n%d",&a,&b);
    c=100*((float)a/b);
    printf("a是b的百分之%.0lf",c);
    return 0;
}