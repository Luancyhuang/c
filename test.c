#include <stdio.h>
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//int main()
//{
//  int n = 0;
//  scanf("%d",&n);
//  int i = 0;
//  int score = 0;
//  int max = 0;
//  int min = 100;
//  for(i=0;i<n;i++)
//  {
//    scanf("%d",&score);
//    if(score>max)
//    {
//      max = score;
//    }
//    if(score<min)
//    {
//      min = score;
//    }
//  }
//  printf("%d\n",max-min);  
//  return 0;
//}
//
//有序序列的判断
int main()
{
  int n = 0;
  int arr[50] = {0};
  scanf("%d",&n);
  int flag1 = 0;
  int flag2 = 0;
  int i = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
    if(i>0)
    {
      if(arr[i] > arr[i-1])
        flag1 = 1;   
      else
        flag2 = 1;
    }
  }
  if(flag1+flag2==1)
    printf("sorted\n");
  else
    printf("unsorted\n");
  return 0;
}
