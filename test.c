#include <stdio.h>
//辗转相除法求解两个数的最大公约数和最小公倍数。
int main()
{
  long long n1 = 0;
  long long m1 = 0;
  scanf("%lld %lld",&n1,&m1);
  long long n2 = n1;
  long long m2 = m1;
  long long max = 0;
  long long min = 0;
  long long tmp = 0;
  while(tmp=n1%m1)
  {
    n1=m1;
    m1=tmp;  
  }
  max = m1;
  min = n2*m2/max;
  printf("%lld\n",max+min);
  return 0;
}
