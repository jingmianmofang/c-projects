//do  while循环
#include<stdio.h>
int main(){
    int a;
    int retry;
    do
    {
    scanf("%d",&a);
    printf("a is %d\n",a);
    if(a>0){
        if(a%2){
            //z说明是奇数
            printf("%d 是奇数\n",a);
        }
        else{
            //偶数
            printf("%d是偶数");
        }
    }
    printf("是否再次判断");
    scanf("%d",&retry);
    } while (retry);  
}