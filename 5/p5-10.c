/*编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。*/
#include<stdio.h>
#define  I 4
#define  J 3
int muti(int v1[4][3],int v2[3][4],int a,int b);
int main(void){
    int v1[4][3];
    int v2[3][4];
    int v3[4][4];
    int a,b;
    printf("请输入v1[4][3]：\n");
    for(a=0;a<4;a++){
        for(b=0;b<3;b++){
            printf("v1[%d][%d]:",a,b);
            scanf("%d",&v1[a][b]);
            printf("\n");
        }
    }
      printf("请输入v2[3][4]：\n");
    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            printf("v2[%d][%d]:",a,b);
            scanf("%d",&v2[a][b]);
            printf("\n");
        }
    }

    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            v3[a][b]=muti(v1,v2,a,b);
        }
    }
      printf("v1[4][3]与v2[3][4]的乘积：\n");
    for(a=0;a<4;a++){
        for(b=0;b<4;b++){
            printf("%d ",v3[a][b]);
        }
        printf("\n");
    }
    return 0;

}
int muti(int v1[4][3],int v2[3][4],int a,int b){
    int v3=0;
    int i,j;
    int sum[3];
    for(i=0,j=0;i<3;i++){
        sum[j++]=v1[a][i]*v2[i][b];
    }
    for(j=0;j<3;j++){
        v3+=sum[j];
    }
    return v3;
}