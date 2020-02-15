/*改写代码清单5-13的程序，将两次考试的分数存储在三维数组tensu中。*/
/*
求4名学生在两次考试中3门课程的总分并显示
*/
#include <stdio.h>

int main(void)
{
    int i, j;
    int k;
    int tensu[2][4][3] = {91, 63, 78, 67, 72, 46, 89, 34, 53, 
    32, 54, 34,97, 67, 82, 73, 43, 46, 97, 56, 21, 85, 46, 35};
    int sum[4][3];

    /*求两次考试的分数之和*/
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            sum[i][j] = tensu[0][i][j]+tensu[1][i][j];
    }
    /*显示第一次考试的分数*/
    puts("第一次考试的分数");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", tensu[0][i][j]);
        putchar('\n');
    }

    /*显示第二次考试的分数*/
    puts("第二次考试的分数");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", tensu[1][i][j]);
        putchar('\n');
    }

    /*显示总分*/
    puts("总分");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", sum[i][j]);
        putchar('\n');
    }

    return 0;
}