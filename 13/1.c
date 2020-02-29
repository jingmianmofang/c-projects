#include <stdio.h>
#include <stdlib.h>
    int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: %s <filename> !\n", argv[0]);
        return -2;
    }
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("该文件不存在。\n");
        return -1;
    }
    printf("该文件存在。\n");
    fclose(fp);
    return 0;
}
