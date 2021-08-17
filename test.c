//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
#include <stdio.h>
#include <string.h>
int is_left_move(char *arr1,char *arr2)
{
  //1.arr1后面追加1个自己
  //strcat 追加字符串
  //strcat
  int len1 = strlen(arr1);
  int len2 = strlen(arr2);
  if(len1 != len2)
    return 0;
  strncat(arr1,arr1,len1);
  
  //strstr -找字串
  //strncat
  //2.判断arr2指向的字符串是否时arr1指向的子串
  char *ret = strstr(arr1,arr2); 
  if(ret == NULL)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main()
{
  char arr1[30] = "abcdef";
  char arr2[] = "cde";
  int ret = is_left_move(arr1,arr2);
  if(ret == 1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
