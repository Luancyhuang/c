#include <stdio.h>
// kiki喝酸奶
int main()
{
  int n = 0;
  int h = 0;
  int m = 0;
  while(scanf("%d %d %d",&n,&h,&m) != EOF)
  {
    if(m%h)
    {
      printf("%d\n",n-m/h-1);
    }
    else
    {
      printf("%d\n",n-m/h);
    }
  }
  return 0;
}
