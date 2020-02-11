#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv){
    int a=atoi(argv[1]);/**命令行直接输入**/
    int b=atoi(argv[2]);
    if(a==b){
        printf("a 等于 b\n");
    }
    else{
        printf("a 不等于 b\n");
    }
    puts("end");
    return 0;

}