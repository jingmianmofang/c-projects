/**月份判断，用swtich**/
#include <stdio.h>
int main()
{
    int month;
    printf("输入月份：");
    scanf("%d", &month);
    switch (month)
    {
    case 3:
    case 4:
    case 5:
        printf("%d月是春季", month);
        break;
    case 6:
    case 7:
    case 8:
        printf("%d月是夏季", month);
        break;
    case 9:
    case 10:
    case 11:
        printf("%d月是秋季", month);
        break;
    case 12:
    case 1:
    case 2:
        printf("%d月是冬季", month);
        break;
    default:
        printf("%d月不存在", month);
        break;
    }
    return 0;
}