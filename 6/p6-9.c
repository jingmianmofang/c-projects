/*创建一个函数，对元素个数为n的int型数组v进行倒序排列。
void rev_intary{int v[],int n)*/
#include<stdio.h>
int rev_intary (int v[],int n);
int main(){
    int n;int i;
    int v[99];
    printf("请输入数组个数：");
    scanf("%d",&n);
    printf("请输入%d个数字：",n);
    for(i=0;i<n;i++){
    scanf("%d",&v[i]);
    printf(" ");
    }
    rev_intary(v,n);
    return 0;
}
int rev_intary (int v[],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%d",v[n-1-i]);
        printf(" ");
    }
    return 0;
}

 