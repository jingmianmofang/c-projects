/*编写程序，从键盘读入文件名，消去该名称的文件的内容。
以只写模式打开文件即可(用只写模式"w"打开文件后，文件的内容就被消除了)。*/
#include<stdio.h>
int main(void)
{
    char filename[20];
    FILE *fp;
    printf("Input filename:");
	scanf("%s", filename);
	fp = fopen(filename, "w");
    if (fp == NULL)
        printf("\a该文件不存在。\n");
    else {
        printf("\a该文件存在。\n");
        fclose(fp);
    }

    return 0;
} 