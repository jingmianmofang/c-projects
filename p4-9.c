/*编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。
另外，当输入0以下的整数时，则什么也不显示。*/
#include<stdio.h>
int main(){
    int a;
    float b;
    int i;
    printf("请输入一个正整数：");
    scanf("%d",&a);
    b=(float)a/2;
    //printf("%f",b);
    for(i=0;i<a/2;i++){
        printf("+");
        printf("-");
    }
    if(b!=a/2){
        printf("+");
    }
    //printf("\n");
    putchar('\n');/*用单引号，不能用双引号*/
    return 0;
}
