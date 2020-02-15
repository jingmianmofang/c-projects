/*编写一段程序，纵向显示练习5-8中得到的分布图。*/
/*
对数组的全部元素进行倒序排列
*/
/*#include <stdio.h>
#define NUMBER 80
int main(void)
{
    int i,j;
    int stu[11]={0};
    int tensu[NUMBER];
    int num;
    int max=0;
    char out[][11]={};
        printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while(num < 1 || num > NUMBER);
    printf("请输入学生分数：");
    for(i=0;i<num;i++){
        scanf("%d",&tensu[i]);
        printf("\n");
    }
    for(i=0;i<num;i++){
        switch(tensu[i]/10){
            case 0:  stu[0]++;break;
            case 1:   stu[1]++;break;
            case 2: stu[2]++;break;
            case 3:  stu[3]++;break;
            case 4:  stu[4]++;break;
            case 5:  stu[5]++;break;
            case 6:  stu[6]++;break;
            case 7:  stu[7]++;break;
            case 8:  stu[8]++;break;
            case 9:  stu[9]++;break;
            case 10:  stu[10]++;break;
        }
    }
    for(i=0;i<10;i++){
        max=(stu[i]<stu[i+1]?stu[i+1]:stu[i]);
    }
    for(i=max-1,j=0;i>=0&&j<11;i-- ){
        while(stu[j]){
            out[i--][j]='*';
            stu[j]--;
        }
        j++;
        i=max;
    }
    for(i=0;i<max;i++){
        for(j=0;j<11;j++){
            printf("%c ",out[i][j]);
        }
        printf("\n");
    } 
    return 0;
}*/



#include <stdio.h>



#define NUMBER 80    /*人数上限*/



int find_max_of_arrays(int a[], int length_of_a);



int main(void)

{

    int i, j;

    int num;              /*实际的人数*/

    int tensu[NUMBER];    /*学生的分数*/

    int bunpu[11] = {0};  /*分布图*/



    printf("请输入学生人数：");

    do {

        scanf("%d", &num);

        if (num < 1 || num > NUMBER)

            printf("请输入1-%d的数：", NUMBER);

    } while (num < 1 || num > NUMBER);

    

    printf("请输入%d人的分数。\n", num);



    for (i = 0; i < num; i++)

    {

        printf("%2d号:", i + 1);

        do {

            scanf("%d", &tensu[i]);

            if (tensu[i] < 0 || tensu[i] > 100)

                printf("请输入1-100的数：");

        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;

    }



    // 1. 获取bunpu里面最大的一个元素的值是多少

    int max = find_max_of_arrays(bunpu, num);

    // 2. 遍历bunpu的每一个元素，如果该元素的值不小于最大的那个元素，则打印出来

    for (int i = 0; i < bunpu[max]; i++) {

        for (int j = 0; j <= 10; j++) {

            if (bunpu[j] >= bunpu[max] - i) {

                printf(" *");

            } else {

                printf("  ");

            }

        }

        printf("\n");

    }

    return 0;

}





/* 返回最大元素的下标 */

int find_max_of_arrays(int a[], int length_of_a) {

    int max = 0;

    for (int i = 1; i < length_of_a; i++) {

        if (a[i] > a[max]) {

            max = i;

        }

    }

    return max;

}
