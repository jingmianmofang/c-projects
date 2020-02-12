/*编写一段程序，
根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。*/
#include<stdio.h>
int main(){
    int i,a,b,c;
     do{
    printf("请输入一个正整数：");
    scanf("%d",&a);
    }while(a<=0);
    c=a/10;
    b=a%10;
    for(i=0;i<c;i++){
        printf("1234567890");
    }
    for(i=1;i<=b-1;i++){
        printf("%d",i);
    }
    if(b==10){
        printf("0");

    }
    else{
        printf("%d",b);
    }

    return 0;
}