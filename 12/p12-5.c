/*改写代码清单12-9的程序，使其能够选择两种方法——输入目的地坐标的方法
以及输入X方向和Y方向的行驶距离的方法。
例如:假设当前值为{5.0,3.0}，想要移动至{7.5,8.9}。
输入坐标时输入7.5和8.9,输入行驶距离时则输入2.5和5.9。*/

/*
汽车行驶
*/
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))/*计算平方*/

/*表示点的坐标的结构体*/
typedef struct {
    double x; /*X坐标*/
    double y; /*Y坐标*/
} Point;

/*表示汽车的结构体*/
typedef struct {
    Point pt;    /*当前位置*/
    double fuel; /*剩余燃料*/
} Car;

/*返回点pa和点pb之间的距离*/
double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}
/*输入x,y方向行驶距离*/
double distance_of2(double a,double b )
{
    return sqrt(sqr(a) + sqr(b));
}
   

/*显示汽车的当前位置和剩余燃料*/
void put_info(Car c)
{
    printf("(%.2f,%.2f)\n", c.pt.x, c.pt.y);
    printf("%.2f\n", c.fuel);
}

/*使c指向的汽车向目标坐标dest行驶*/
int move(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if (d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;
    return 1;
}
int move2(Car*c,int a,int b){
     double d = distance_of2(a,b);
       if (d > c->fuel)
        return 0;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
    while (1) {
        int select;
        Point dest;
        int k;
        int d=0;
        double a,b;
        put_info(mycar);
        printf("开动汽车吗【YES---1/NO--0】：");
        scanf("%d", &select);
        if (select != 1)break;
        printf("已知目的地坐标----1/已知x,y方向上行驶距离-----0\n");
        scanf("%d",&k);
        if(k==1){
        printf("目的地的X坐标："); scanf("%lf", &dest.x);
        printf("目的地的Y坐标："); scanf("%lf", &dest.y);
          d=move(&mycar, dest);
          
        }
        else
        {
            printf("距离目的地x方向距离：");scanf("%lf",&a);
            printf("距离目的地y方向距离：");scanf("%lf",&b);
              d=move2(&mycar, a,b);
        }
   
        if (!d)
            puts("\a燃料不足无法行驶。");
    }

    return 0;
}