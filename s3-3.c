#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv){
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    printf("较大的数是%d\n",(a>b)?a:b);
    return 0;
}