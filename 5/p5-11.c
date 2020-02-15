/*编写一段程序，输入6名学生2门课程(语文、数学)的分数，
显示各门课程的总分和平均分，以及各个学生的总分和平均分。*/
#include<stdio.h>
int main(void){
    int stu[6][2];
    int i,j;
    float sum[6]={0};//六个学生的总分
    float average[6]={0};//六个学生的品均分
    float class[2][2]={0};//两门课的总分平均分class[0][0]  语文  总分class[1][0]数学纵缝
    float summ=0;
    float aver=0;
    printf("请输入六位生的语文成绩：\n");
    for(i=0;i<6;i++){
        printf("%c:",'A'+i);
        scanf("%d",&stu[i][0]);
        printf(" ");
    }
    printf("\n");
    printf("请输入六位学生的数学成绩：\n");
    for(i=0;i<6;i++){
        printf("%c:",'A'+i);
        scanf("%d",&stu[i][1]);
        printf(" ");
    }
    putchar('\n');
    for(i=0;i<6;i++){//求语文总分
        class[0][0]+=stu[i][0];
    }
    class[0][1]=class[0][0]/6;//求语文平均分
      for(i=0;i<6;i++){//数学总分
        class[1][0]+=stu[i][1];
    }
    class[1][1]=class[1][0]/6;//数学平均分
    for(i=0;i<6;i++){
        sum[i]=stu[i][0]+stu[i][1];
        average[i]=sum[i]/2;
    }
    printf("语文总分：%3.0f\t",class[0][0]);
    printf("语文平均分：%3.1f\t",class[0][1]);
    printf("数学总分：%3.0f\t",class[1][0]);
    printf("数学平均分：%3.1f\t",class[1][1]);
    printf("\n");

for(i=0;i<6;i++){
    printf("%c: ",'A'+i);
    printf("总分：%-3.0f",sum[i]);
    printf("平均分：%-3.1f",average[i]);
    printf("\n");
}



}