//int strncmp(const char*string1,const char*string2,size_t count)
#include <stdio.h>
#include <string.h>
//int my_strncmp(const char *str1,const char *str2,int k)
//{
//  
//
//}
//int main()
//{
//  //strncmp -字符串比较
//  const char *p1 = "abcdef";
//  const char *p2 = "abcdqwr";
//  int ret = my_strncmp(p1,p2,);
//  printf("%d\n",ret);
//  return 0;
//}
int main()
{
 // strstr
 // char *strstr(const char *haystack, const char *needle);  
  char *p1 = "abcdef";
  char *p2 = "def";
  char *ret =  strstr(p1,p2);
  if(ret == NULL)
  {
    printf("子串不存在\n");
  }
  else
  {
    printf("%s\n",ret);
  }
  return 0;
}




