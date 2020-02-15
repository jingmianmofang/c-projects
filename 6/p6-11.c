 /*创建一个函数search_idx,将和有n个元素的数组v中的key相等的所有元素的下标存储
在数组idx中,返回和key相等的元素的个数。
int search_idx(const int v[] int idx[],int key,int n);
例如，如果v中所接收的数组的元素是{1,7,5,7,2,4,7},
key为7的话,{1,3,6}就会被存储在id中x，并返回3。*/
#include<stdio.h>
int search_idx (const int v[] ,int idx[],int key,int n);
int main(){
  int n;
  int v[99];
  int idx[99];
  int key;
  int i=0;
  int c;
  printf("请输入数组V的个数：");
  scanf("%d",&n);

  printf("输入%d 个整数:",n);

  for(i=0;i<n;i++){
  scanf("%d",&v[i]);
  }

  printf("\n请输入一个key：");
  scanf("%d",&key);

  c=search_idx(v,idx,key,n);
  printf("与%d相同的个数为：%d",key,c);
   return 0;
}
int search_idx(const int v[],int idx[],int key,int n){
    int i;
    int j=0;
    int c=0;
     for(i=0;i<n;i++){
      if(v[i]==key){
          c++;
          idx[j++]=i;
      }
  }
  return c;
}