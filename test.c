#include <stdio.h>
//简单计算器
int main()
{
  double n1 = 0.0;
  double n2 = 0.0;
  char op = 0;
  while(~scanf("%lf%c%lf",&n1,&op,&n2))
  {
    switch(op)
    {
      case '+':
        printf("%.4lf+%.4lf=%.4lf\n",n1,n2,n1+n2);
        break;
      case '-':
        printf("%.4lf-%.4lf=%.4lf\n",n1,n2,n1-n2);
        break;
      case '*':
        printf("%.4lf*%.4lf=%.4lf\n",n1,n2,n1*n2);
        break;
      case '/':
        if(n2==0.0)
        {
          printf("被除数不能为能'0'\n");
        }
        else
        {	
          printf("%.4lf/%.4lf=%.4lf\n",n1,n2,n1/n2);
        }
        break;
      default:
        printf("非法输入\n");
        break;
    }
  
  
  }

  return 0;
}
