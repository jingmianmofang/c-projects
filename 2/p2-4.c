#include<stdio.h>
int main(){
    int a,b;
    float c,d;
    double e,f;
    c=3.1;
    e=2.223;
    d=c+4;
    printf("d=%f\n",d);
    d=c+3.1;
    printf("d=%f\n",d);
    f=e+2;
    printf("f=%lf\n",f);
    f=e+2.12;
    printf("f=%lf\n",f);
    return 0;
}