#include <stdio.h>
//假设你们社团竞选社长，有两名候选人分别是A和B,社团每名同学必须并且只能投一票，最终得票最多的人为社长。
int main()
{
  char buf[100] = {0};
  //输入
  gets(buf);
  //统计
  int flag = 0;
  int i = 0;
  while(buf[i]!='0')
  {
    if(buf[i]=='A')
      flag++;
    if(buf[i]=='B')
      flag--; 
    i++;
  }
  if(flag>0)
    printf("A\n");
  else if(flag<0)
    printf("B\n");
  else
    printf("E\n");
  //输出
  return 0;
}
