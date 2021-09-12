#include <stdio.h>
//BMI体质健康指数
int main()
{
  int weight = 0;
  int high = 0;
  scanf("%d %d",&weight,&high);
  double BMI = weight/((high/100.0)*(high/100.0));
  printf("%.2lf\n",BMI);
  return 0;
}
