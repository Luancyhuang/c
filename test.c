#include <stdio.h>
//给定秒数seconds（0<seconds<100,000,000)，把秒转换成小时、分钟和秒。
//3661 
//1 1 1
int main()
{
  int seconds = 0;
  int h = 0;
  int m = 0;
  int s = 0;
  scanf("%d",&seconds);
  h = seconds/60/60;
  m = seconds/60%60;
  s = seconds%60;
  printf("h = %d,m = %d,s = %d\n",h,m,s);
  return 0;
}
