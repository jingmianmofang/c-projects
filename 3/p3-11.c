/*编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。
请使用逻辑或运算符*/
#include<stdio.h>
int main(){
    int n1,n2;
    printf("请输入两个整数：\n");
    scanf("%d%d",&n1,&n2);
    if((n1-n2<=10&&n1-n2>=0)||(n2-n1<=10&&n2-n1>=0)){
        printf("它们的差小于等于10");
    }
    else
    {
        printf("它们的差大于等于11");
    }
    return 0;
}