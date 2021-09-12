#include <stdio.h>
//给定一个球体的半径，计算其体积。
//其中体积公式为v = 4/3πr^3
//其中π=3.1415926
int main()
{
  //1.输入
  double r = 0.0;//定义半径
  scanf("%lf",&r);
  double v = 0.0;//定义体积
  double pi = 3.1415926;
  //2.计算
  v = 4.0/3*pi*r*r*r;
  //3.输出
  printf("%.3lf\n",v);
  return 0;
}
