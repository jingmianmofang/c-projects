/*创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){...}*/
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){
    int i,j;int k;
    int c[3][3]={0};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=0;
            for(k=0;k<4;k++){
            c[i][j]+=b[i][k]*a[k][i];
            }
        }
    }

}