#include <stdio.h>

//网购（11.11/12.12）
int main()
{
  int month = 0;
  int day = 0;
  double price = 0.0;
  double cut = 1.0;
  int flag = 0;
  double last = 0.0;
  scanf("%d %d %lf %d",&month,&day,&price,&flag);
  if(month == 11 && day == 11)
  {
    cut = 0.7;  
  }
  else if(month == 12 && day == 12)
  {
    cut = 0.8;
  }
  last = price*cut - flag*50;
  if(last<0.0)
  {
    printf("%.2lf\n",0.0);
  }
  else
  {
    printf("%.2lf\n",last);
  }
  return 0;
}
