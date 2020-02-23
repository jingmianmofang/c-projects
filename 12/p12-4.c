/*对代码清单12-7的程序进行改写。
不将姓名、身高等数据作为初始值，而是从键盘输入。
可以选择按身高进行升序排列，或者按照姓名的顺序排列。*/
/*
将5名学生的身高按升序排列
*/
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

/*表示学生的结构体*/
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

/*将x和y指向的学生进行交换*/
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*将学生数组a的前n个元素按身高进行升序排列*/
void sort_by_height(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void)
{
    int i;
   /* Student std[] = {
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Masaki", 179, 77.5, 70000},
    };*/
    Student std[5];
    printf("第一位同学的名字：");scanf("%s",&std[0].name);
    printf("第一位同学的身高：");scanf("%d",&std[0].height);
    printf("第一位同学的体重：");scanf("%.1f",&std[0].weight);
    printf("第一位同学的奖学金：");scanf("%ld",&std[0].schols);
    printf("第二位同学的名字：");scanf("%s",&std[1].name);
    printf("第二位同学的身高：");scanf("%d",&std[1].height);
    printf("第二位同学的体重：");scanf("%.1f",&std[1].weight);
    printf("第二位同学的奖学金：");scanf("%ld",&std[1].schols);
    printf("第三位同学的名字：");scanf("%s",&std[2].name);
    printf("第三位同学的身高：");scanf("%d",&std[2].height);
    printf("第三位同学的体重：");scanf("%.1f",&std[2].weight);
    printf("第三位同学的奖学金：");scanf("%ld",&std[2].schols);
    printf("第四位同学的名字：");scanf("%s",&std[3].name);
    printf("第四位同学的身高：");scanf("%d",&std[3].height);
    printf("第四位同学的体重：");scanf("%.1f",&std[3].weight);
    printf("第四位同学的奖学金：");scanf("%ld",&std[3].schols);
    printf("第五位同学的名字：");scanf("%s",&std[4].name);
    printf("第五位同学的身高：");scanf("%d",&std[4].height);
    printf("第五位同学的体重：");scanf("%.1f",&std[4].weight);
    printf("第五位同学的奖学金：");scanf("%ld",&std[4].schols);

    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);

    sort_by_height(std, NUMBER);

    puts("\n按身高排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    return 0;
}