#include <stdio.h>
//求两个数最大公约数和最小公倍数之和
int main()
{
  int n = 0;
  int m = 0;
  scanf("%d %d",&n,&m);
  int max = n>m?m:n;//假设n和m较小的数为最大公约数
  int min = n>m?n:m;//同上，较大数为最小公倍数
  while(1)
  {
    if(n%max==0 && m%max==0)
    {
      break;    
    }
    max--;  
  }
  while(1)
  {
    if(min%n == 0 && min%m == 0)
    {
      break;       
    }
    min++;
  }
  printf("%d\n",max+min);
  return 0;
}
