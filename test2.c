//char *strtok(char *str, const char *delim);
//delim 参数是个字符串，定义了用作分隔符的字符集合。
//strtok 
#include <stdio.h>
#include <string.h>
int main()
{
  //192.168.12.12 点分十进制的表示方式IP地址的
  //192 168 12 12
  char arr[] = "542914825@qq.com";
  const char *p = "@.";
  //strtok(arr,p);
  char buf[1024] = {0};
  strcpy(buf,arr);
  //切割buf 中的字符串
  //char *ret = strtok(arr,p);
  //printf("%s\n",ret);
  //ret = strtok(NULL,p);
  //printf("%s\n",ret);
  //ret = strtok(NULL,p);
  //printf("%s\n",ret);
  char *ret = NULL;
  for(ret=strtok(arr,p);ret != NULL;ret=strtok(NULL,p))
  {
    printf("%s\n",ret);
  }
  return 0;
}
