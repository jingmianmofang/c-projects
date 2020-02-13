//编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("请输入三个数：");
    scanf("%d%d%d", &n1, &n2, &n3);
    if(n1==n2)
    {
        if(n1==n3){
            printf("三个值都相等");
        }
        else
        {
            printf("有两个值相等");
        }
    }
    else
    {
        if(n1==n3||n2==n3){
            printf("有两个值相等");
        }
        else
        {
            printf("三个值各不相同");
        }
    }
    return 0;
    
}