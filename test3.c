#include <stdio.h>
//空心三角形
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<n;j++)
      {
        if(i==n-1||j==0||i==j)
	{
	  printf("* ");
	}
	else
	{
	  printf("  ");
	}
      }
      printf("\n");    
    }
  }
  return 0;
}

