#include <stdio.h>

//int main()
//{
//  int n = 0;
//  int m = 0;
//  scanf("%d %d",&n,&m);
//  int i = 0;
//  int j = 0;
//  int num = 0;
//  for(i=1;i<=n*m;i++)
//  {
//    scanf("%d",&num);
//    printf("%d ",num);
//    if(i%m == 0)
//    {
//      printf("\n");
//    }
//  }
//  return 0;
//}
//从n行m列的方阵队列找到身高最高的人的位置，请你帮助他完成这个任务。
int main()
{
  int n = 0;
  int m = 0;
  scanf("%d %d",&n,&m);
  int i = 0;
  int j = 0;
  int num = 0;
  int max = 0;
  int x = 0;
  int y = 0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&num);
      if(num>max)
      {
        max = num;
	x = i;
	y = j;
      }
    }  
  }
  printf("%d %d\n",x+1,y+1);
  return 0;
}











