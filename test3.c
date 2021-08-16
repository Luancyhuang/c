//实现一个函数，可以左旋字符串中的k个字符。
//例如：ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <stdio.h>
#include <string.h>
#include <assert.h>
//typedef unsiged int u_int;//类型重命名
void left_move(char *arr,int k)
{
 assert(arr);
 int i = 0;
 int len = strlen(arr);
 for(i=0;i<k;i++)
 {
   //左旋转一个字符
   char tmp = *arr;//1.把第一个元素放到一个临时变量（tmp)存储。
   int j = 0;
   for(j=0;j<len-1;j++)
   {
     *(arr+j) = *(arr+j+1);
   }//2.依次把后面的元素挪移到前面一个位置。
   *(arr+len-1) = tmp;//3.把移动的元素移动到最后一个位置。
 }
}
int main()
{ 
 // u_int x = 0;  
  char arr[] = "abcdef";
  left_move(arr,2);
  printf("%s\n",arr);
  return 0;
}
