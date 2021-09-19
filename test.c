#include <stdio.h>
//任意输入一个正整数N，统计1～N之间奇数的个数和偶数的个数，并输出。
//int main()
//{
//  int n = 0;
//  scanf("%d",&n);
//  int odd = 0;
//  int i = 0;
//  for(i=1;i<=n;i++)
//  {
//    if(i%2 == 1)
//    {
//      odd++;    
//    }  
//  }
//  printf("%d %d\n",odd,n-odd);
//  return 0;
//}
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
int main()
{
  int n = 0;
  scanf("%d",&n);
  int i = 0;
  float score = 0.0;
  float sum = 0.0;
  float max = 0.0;//假设最高分
  float min = 100.0;//假设最低分
  for(i=0;i<n;i++)
  {
    scanf("%f",&score);
    sum += score;
    if(max<score)
    {
      max = score;
    }
    if(min>score)
    {
      min = score;
    }
  }
  printf("%.2f %.2f %.2f",sum,max,min);
  return 0;
}
