/*编写如下函数，删除字符串str内的所有数字字符。
void del_digit(char *str) {  ...  }*/
//1.找到每一处数字字符
//2.删除每一处数字字符
void del_digit(char *str){
    char*s=str;
    char* str2;
    int i=0;
    int n=strlen(str);
    while(*s!='\0'){
        str2=s;
        while(*s<='9'&&*s>='0'){//跳过数字字符
            s++;
        }
    }
    for(i=0;i<n;i++){
        s=str2;
        str--;
        s--;
    }
}