#include <stdio.h>
//输入n行n列星形图
//int main()
//{
//  int n = 0;
//  while(~scanf("%d",&n))
//  {
//    int i = 0;
//    for(i=0;i<n;i++)
//    {
//      int j = 0;
//      for(j=0;j<n;j++)
//      {
//        if(i==j)
//	{
//	  printf("*");
//	}
//        else
//	{
//	  printf(" ");
//	}
//      }
//      printf("\n");
//    }
//  }
//  return 0;
//}
//反向输出对角线图形
int main()
{
  int n = 0;
  while(scanf("%d",&n))
  {
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<n;j++)
      {
        if(i+j==n-1)
	{
	  printf("*");
	}
	else
	{
	  printf(" ");
	}
      }
      printf("\n");    
    }  
  }
  return 0;
}
