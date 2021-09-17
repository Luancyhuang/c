#include <stdio.h>
//倒置金字塔
//int main()
//{
//  int n = 0;
//  while(~scanf("%d",&n))
//  {
//    int i = 0;
//    for(i=0;i<n;i++)
//    {
//      int j = 0;
//      for(j=0;j<i;j++)
//      {
//        printf(" ");      
//      }
//      for(j=0;j<n-i;j++)
//      {
//        printf("* ");
//      }
//      printf("\n");
//    }
//  }
//  return 0;
//}
//
//打印菱形
int main()
{
  int n = 0;
 // 根据n 的值确定行
  while(~scanf("%d",&n))
  {
    //上下两部分进行拆分
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<n-i;j++)
      {
        printf(" ");
      }
      for(j=0;j<=i;j++)
      {
        printf("* ");
      }
      printf("\n");
    }
    for(i=0;i<n+1;i++)
    {
      int j = 0;
      for(j=0;j<i;j++)
      {
        printf(" ");
      }
      for(j=0;j<n+1-i;j++)
      {
        printf("* ");
      }
      printf("\n");    
    }
  }
  return 0;
}
