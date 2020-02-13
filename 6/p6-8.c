/*创建一个函数，返回元素个数为n的int型数组v中的最小值。
int min_of(const int v[]，int n){...}*/
#include<stdio.h>
int min_of (const int v[],int n);
int main(){
    int n;
    int min;
    int i;
    int a[99];
    printf("请输入数组个数：");
    scanf("%d",&n);
    printf("请输入%d个数字：",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    putchar('\n');
    }
    min=min_of(a,n);
    printf("数组中最小的数字是：%d",min);
    return 0;
}
int min_of(const int v[],int n){
    int minny;
    int i;
    minny=v[0];
    for(i=1;i<n;i++){
        if(minny>v[i]){
            minny=v[i];
        }
    }
    return minny;
}
