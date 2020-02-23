/* 练习 12-3
编写如下函数，从键盘输入int型、long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。
struct xyz scan_xyz(){•••}*/
struct xyz{
    int x;
    long y;
    double z;
};
struct xyz scan_xyz(){
    struct xyz a;
    printf("请输入第1个数值:");  scanf("%d",&a.x);
    printf("请输入第2个数值:");  scanf("%ld",&a.y);
    printf("请输入第3个数值:");  scanf("%lf",&a.z);
}
