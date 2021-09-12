#include <stdio.h>

//int main()
//{
//  int a = 0;
//  int b = 0;
//  //输入
//  scanf("%d %d",&a,&b);
//  //计算
//  int sum = ((a+b)%100)%100;
//  printf("%d\n",sum);
//  return 0;
//}


//给定一个浮点数，要求得到该浮点数的各位数
int main()
{
  double d = 0.0;
  scanf("%lf",&d);
  int n = (int) d;
  printf("%d\n",n%10);
  return 0;
}







