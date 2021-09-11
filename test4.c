#include <stdio.h>
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出。
int main()
{
  int year = 0;
  int month = 0;
  int date = 0;
  //按照格式输入
  scanf("%4d%2d%2d",&year,&month,&date);
  //按照格式输出
  printf("year=%4d\n",year);
  printf("month=%02d\n",month);
  printf("date=%02d\n",date);
  return 0;
}
