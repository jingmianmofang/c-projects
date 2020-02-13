/*假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。
a = b = 1.5;*/
#include<stdio.h>
int main(){
    double a;
    int b;
    a=b=1.5;
    printf("变量a,b分别是:%lf %d",a,b);
    return 0;
}