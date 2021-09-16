#include <stdio.h>
//正方形
//int main()
//{
//  int n = 0;
//  int i = 0;
//  while(~scanf("%d",&n))
//  {
//    for(i=0;i<n;i++)
//    {
//      int j = 0;
//      for(j=0;j<n;j++)
//      {
//        printf("* ");
//      }
//      printf("\n");
//    }
//  }
//  return 0;
//}
//三角形
//int main()
//{
//  int n = 0;
//  int i = 0;
//  while(~scanf("%d",&n))
//  {
//    for(i=0;i<n;i++)
//    {
//      int j = 0;
//      for(j=0;j<=i;j++)
//      {
//        printf("* ");
//      }
//      printf("\n");
//    }  
//  }
//  return 0;
//} 
//倒置三角形
int main()
{
  int n = 0;
  while(~scanf("%d",&n))
  {
    int i = 0;
    for(i=0;i<n;i++)
    {
      int j = 0;
      for(j=0;j<n-i;j++)
      {
        printf("* ");      
      }
      printf("\n");
    }  
  }
  return 0;
}
