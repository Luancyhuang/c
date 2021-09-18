#include <stdio.h>
//数字三角形
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int i = 0;
    for(i=1;i<=n;i++)
    {
      int j = 0;
      for(j=1;j<=i;j++)
      {
        printf("%d ",j);      
      }
      printf("\n");
    }  
  }
  return 0;
}

