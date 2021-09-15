#include <stdio.h>
//
int main()
{
  int w = 0;
  int h = 0;
  while(~scanf("%d%d",&w,&h))
  {
    double bmi = w/((h/100.0)*(h/100.0));//计算
    //判断
    if(bmi<18.5)
      printf("underweight\n");
    else if(bmi>=18.5 && bmi<=23.9)
      printf("normal\n");
    else if(bmi>23.9 && bmi<=27.9)
      printf("overweight\n");
    else
      printf("obese\n");
  }
  return 0;
}
