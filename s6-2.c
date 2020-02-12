/*static*/
#include <stdio.h>
double fact_s( int );
int main( void )
{
   int i, n;
   printf("Input n: ");
   scanf("%d", &n);
   for( i=0; i<n; i++ )
      printf("%3d!=%.0f\n", i, fact_s(i));
   return 0;
}
double fact_s(int n)
{
   static double f = 1;/*生命周期
 程序开始执行直到程序结束
 等同于全局变量
 静态变量的初值
 定义的时候给初值
 否则，缺省为0（每一个bit都是0）
*/
   f = f * n;
   return f;
} 
