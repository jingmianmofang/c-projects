/*不使用下标运算符，编写如下函数，若字符串S中含有字符C（若含有多个，以先出现的为准），则返回指向该字符的指针，否则返回空指针。
char *str_chr(const char *s, int c) { ... }*/
char *str_chr(const char *s, int c){
    char*p=s;
    int i=0;
    while(*p!='\0'){
        if(*p=='c'){
            i++;
            break;
        }
        p++;
    }
    return p;
}