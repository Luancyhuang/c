#include <stdio.h>
#include <math.h>
//int main()
//{
//  int ret = pow(2,6);
//  printf("%d\n",ret);
//  return 0;
//}
//输入3科成绩，然后把3科成绩输出，成绩为整数形式
//输入一行，3科成绩，用空格分隔，范围（0-100）
//输出一行，把3科成绩显示出来
//
//
//int main()
//{
//  int score[3] = {0};
//  int i = 0;
//  for(i=0;i<3;i++)
//  {
//    scanf("%d",&score[i]);
//  }
//  printf("score1=%d,score2=%d,score3=%d\n",score[0],score[1],score[2]);
//  return 0;
//}
//变种水仙花数(五位数）
int main()
{
  int i = 0;
  for(i=10000;i<=99999;i++)
  {
    //判断i是否lily number
    int j = 0;
    int sum = 0;
    for(j=10;j<=10000;j*=10)
    {
      sum +=(i/j)*(i%j);
    }
    if(sum == i)
    {
      printf("%d ",i);
    }
  }
  return 0;
}













