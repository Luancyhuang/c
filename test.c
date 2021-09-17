#include <stdio.h>
//倒置金字塔
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<i;j++)
      {
        printf(" ");      
      }
      for(j=0;j<n-i;j++)
      {
        printf("* ");
      }
      printf("\n");
    }
  }
  return 0;
}
