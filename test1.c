#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
  int *p = (int*)malloc(5*sizeof(int));
  if(p == NULL)
  { 
    //打印错误信息的方式
    printf("%s\n",strerror(errno));
  }
  else 
  {
    //正常使用空间
    int i = 0;
    for(i = 0; i < 5;i++)
    {
      *(p+i) = i;
    }
    for(i = 0; i < 5;i++)
    {
      printf("%d ",*(p+i));
    }
  }
  return 0;
}
