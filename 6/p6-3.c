/*//创建一个函数，返回int型整数的立方。
int cube(int x){....}*/
#include<stdio.h>
#include<math.h>
int cube(int x);
int main(){
    int y;
    int x;
    printf("q请输入一个整数：");
    scanf("%d",&x);
    y=cube(x);
    printf("x的立方是：%d",y);
    return 0;
}
int cube(int x){
    int z;
    z=pow(x,3);
    return z;
}