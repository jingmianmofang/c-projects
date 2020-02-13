/*创建一个函数，连续发10次响铃。
void alert(int n) { ...}*/
#include <stdio.h>
void alert(int n){
    if(n){
    printf("\a");
    }
 
}
int main(void)
{
    int x;
    printf("是否需要响铃【0...NO/1...YES】：\n");
    scanf("%d",&x);
    alert(x);
    return 0;
}