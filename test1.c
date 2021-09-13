#include <stdio.h>

int main()
{
  double score[3] = {0};
  //输入
  int i = 0;
  double sum = 0.0;
  for(i=0;i<3;i++)
  {
    scanf("%lf",&score[i]);
    sum += score[i];
  }
  //输出
  printf("%.2lf %.2lf\n",sum,sum/3);
  return 0;
}
