#include <stdio.h>
//数字三角形
//int main()
//{
//  int n = 0;
//  while(~scanf("%d",&n))
//  {
//    int i = 0;
//    for(i=1;i<=n;i++)
//    {
//      int j = 0;
//      for(j=1;j<=i;j++)
//      {
//        printf("%d ",j);      
//      }
//      printf("\n");
//    }  
//  }
//  return 0;
//}
//公务员考试
//int main()
//{
//  int score = 0;
//  int i = 0;
//  int sum = 0;
//  int max = 0;
//  int min = 100;
//  for(i=0;i<7;i++)
//  {
//    scanf("%d",&score);
//    sum += score;
//    if(max<score)
//      max = score;
//    if(min<score)
//      min = score;
//  }
//  printf("%.2f\n",(sum - max -min)/5.0);
//  return 0;
//}
//在一个有序数列中插入一个数字
int main()
{
  int n = 0;
  int arr[51] = {0};
  int m = 0;
  scanf("%d",&n);
  int i = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);  
  }
  scanf("%d",&m);
  for(i=n-1;i>=0;i--)
  {
    if(arr[i]>m)
    {
      arr[i+1] = arr[i];
    }
    else 
    {
      arr[i+1] = m;
      break;
    }
  }
  //要输入的元素小于所有的元素
  if(i<0)
  {
    arr[0] = m;  
  }
  for(i=0;i<n+1;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
