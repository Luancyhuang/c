#include <stdio.h>
//带空格的前置三角形
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<n-1-i;j++)
      {
        printf("  ");      
      }
      for(j=0;j<=i;j++)
      {
        printf("* ");
      }
      printf("\n");
    }  
  }
  return 0;
}
