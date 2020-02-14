/*编写如下函数，将*y年*m月*d日的日期，修改为其前一天或后一天的曰期。
void decrement_date(int *y,int *m,int *d){...}
void increment_date(int *y,int *m,int *d){...}*/
void decrement_date(int *y,int *m,int *d){
    *d=*d-1;
}
void increment_date(int *y,int *m,int *d){
    *d=*d+1;
}

