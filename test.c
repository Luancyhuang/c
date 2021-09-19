#include <stdio.h>
//任意输入一个正整数N，统计1～N之间奇数的个数和偶数的个数，并输出。
int main()
{
  int n = 0;
  scanf("%d",&n);
  int odd = 0;
  int i = 0;
  for(i=1;i<=n;i++)
  {
    if(i%2 == 1)
    {
      odd++;    
    }  
  }
  printf("%d %d\n",odd,n-odd);
  return 0;
}
