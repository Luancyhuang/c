#include <stdio.h>
//int main()
//{
//  int i = 0;
//  int score[5] = {0};
//  for(i=0;i<5;i++)
//  {
//    int j = 0;
//    float sum = 0.0;
//    for(j=0;j<5;j++)
//    {
//      scanf("%f",score[j]);
//      sum += score[j];
//    }
//    for(j=0;j<5;j++)
//    {    
//      printf("%.1f ",score[j]);
//    }
//    printf("%.1f\n",sum);    
//  }
//  return 0 ;
//}
//
//矩阵元素定位
int main()
{
  int n = 0;
  int m = 0;
  scanf("%d %d",&n,&m);
  //接受n行m列数组
  int arr[10][10] = {0};
  int i = 0;
  int j = 0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&arr[i][j]);    
    }  
  }
  int x = 0;
  int y = 0;
  scanf("%d %d",&x,&y);
  printf("%d\n",arr[x-1][y-1]);
  return 0;
}













