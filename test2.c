#include <stdio.h>
#include <math.h>
//计算一元二次方程
int main()
{
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;
  while(~scanf("%lf %lf %lf",&a,&b,&c))
  {
    if(a==0)
    {
      printf("不是一元二次方程\n");
    }
    else
    {
      double disc = b*b-4*a*c;
      if(disc==0)
      {
        //有两个相同的实根
	printf("x1=x2=%.2lf\n",-b/(2*a));
      }
      else if(disc>0)
      {
        //有两个不相同的实根
	printf("x1=%.2lf;x2=%.2lf\n",(-b-sqrt(disc))/(2*a),
			             (-b+sqrt(disc))/(2*a));
      }
      else 
      {
        //有两个虚根
	double real = -b/(2*a);//实部
	double image = sqrt(-disc)/(2*a);//虚部
        printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",real,image,real,image);
      }    
    }  
  }
  return 0;
}
