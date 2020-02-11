/*编写一段程序，显示以所输入整数为边长的正方形*/
int main(void)
{
    int i , j;
    int line;

    printf("边长："); scanf("%d", &line);

    for (i = 1; i <= line; i ++) {
        for (j = 1; j <= line; j++){
            putchar('*');
        }
        putchar('\n');
        
    }

    return 0;
}