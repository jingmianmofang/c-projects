/*练习 11-7不使用下标运算符
实现代码清单9-11的str_toupper函数和str_totower函数*/
/*
对字符串中的英文字符进行大小写转换
*/
#include <stdio.h>
#include <ctype.h>

/*将字符串中的英文字符转为大写字母*/
void str_toupper(char s[])
{
    char*p=s;
    while (*p!='\0') {
        *p = toupper(*p);
        p++;
    }
}

/*将字符串中的英文字符转为小写字母*/
void str_tolower(char s[])
{
    char*p=s;
    while (*p!='\0') {
        *p = tolower(*p);
        p++;
    }
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    str_toupper(str);
    printf("大写字母：%s\n", str);

    str_tolower(str);
    printf("小写字母：%s\n", str);

    return 0;
}