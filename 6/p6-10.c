/*
创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。
void intary_rcpy(int v1[],const int v2[],int n){....}*/
#include<stdio.h>
void intary_rcpy(int v1[],const int v2[],int n);
int main(){
    int i;
    int n;
    int v2[99];
    int v1[99]={0};
     printf("请输入数组个数：");
    scanf("%d",&n);
    printf("请输入%d个数字：",n);
    for(i=0;i<n;i++){
    scanf("%d",&v2[i]);
    printf(" ");
    }
     intary_rcpy(v1,v2,n);
     return 0;
}
void intary_rcpy(int v1[],const int v2[],int n){
    int i=0;
    for(i=0;i<n;i++){
        printf("%d",v2[n-1-i]);
        printf(" ");
        v1[i]=v2[n-1-i];
    }
   /** printf("v1数列是：");
    for(i=0;i<n;i++){
        printf("%d",v1[i]);
        printf(" ");
    }**/
}
