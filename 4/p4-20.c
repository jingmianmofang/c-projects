/*编写一段程序，为九九乘法表增加横纵标题。*/
#include<stdio.h>
int main(){
    int b,c;
    int i=1;
    b=1;
    printf("*********九九乘法口诀表**********\n");
    for(i=1;i<=9;i++){
        do{
        c=i*b;
        printf("%dx%d=%d ",b,i,c);
        b++;
        }while(b<=i);
        putchar('\n');
        b=1;
    }
    return 0;
}