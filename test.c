#include <stdio.h>
// 求一年中某一个月有多少天？
int main()
{
  int year = 0;
  int month = 0;
  int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
  while(scanf("%d %d",&year,&month)!=EOF) 
  {
    int day = days[month-1];
    if((year%4 == 0 && year%100 != 0)||(year%400 == 0))
    {
      if(month == 2)
      {
        day++;
      }
    }
    printf("day = %d\n",day);   
  }
  return 0;
}
