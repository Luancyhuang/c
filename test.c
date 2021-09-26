#include <stdio.h>
//辗转相除法求解两个数的最大公约数和最小公倍数。
//int main()
//{
//  long long n1 = 0;
//  long long m1 = 0;
//  scanf("%lld %lld",&n1,&m1);
//  long long n2 = n1;
//  long long m2 = m1;
//  long long max = 0;
//  long long min = 0;
//  long long tmp = 0;
//  while(tmp=n1%m1)
//  {
//    n1=m1;
//    m1=tmp;  
//  }
//  max = m1;
//  min = n2*m2/max;
//  printf("%lld\n",max+min);
//  return 0;
//}
//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0和1如果某一位是奇数，就把他变成1，如果是偶数，那么就把它变成0.请你回答他最后得到的数是多少？
#include <math.h>
int main()
{
  int n = 0;
  scanf("%d",&n);
  int i = 0;
  int sum = 0;
  while(n)
  {
    int m = n%10;
    if(m%2==1)
    {
      m=1;    
    }
    else 
    {
      m=0;
    } 
    sum += m*pow(10,i);
    i++;
    n/=10;
  }
  printf("%d\n",sum);
  return 0;
}
//
//
//
//
//
//
