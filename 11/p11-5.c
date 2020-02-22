/*练习 11-5
不使用下标运算符，编写如下函数，返回字符串s中字符c的个数（若不存在,则为0）。
int str_chnum(const char *s, int c) { ...  }*/
int str_chnum(const char *s, int c){
    char*p=s;
    int i;
    c=0;
    while(*p!='\0'){
        c++;
        p++;
    }
    return c;
    }
