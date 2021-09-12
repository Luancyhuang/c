#include <stdio.h>
#include <math.h>
//计算三角形的周长和面积
int main()
{
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;
  scanf("%lf %lf %lf",&a,&b,&c);
  double girth = a + b + c;
  double p = girth/2;
  //海伦公式计算三角形的面积
  double area = sqrt(p*(p-a)*(p-b)*(p-c));
  printf("%.2lf %.2lf\n",girth,area);
  return 0;
}
