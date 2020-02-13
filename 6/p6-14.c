/*编写一段程序，为double型数组的所有元素分配静态存储期
并确认它们都被初始化为0.0*/
#include<stdio.h>
int main(){
    int n;int i;
    static double v[99];
    printf("数组个数：");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        v[i++]=0.0;
    }
    printf("%.1lf",v[n-1]);
}