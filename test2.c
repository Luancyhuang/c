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
//int main()
//{
//  int n = 0;
//  int m = 0;
//  scanf("%d %d",&n,&m);
//  int i = 0;
//  int j = 0;
//  int num = 0;
//  int max = 0;
//  int x = 0;
//  int y = 0;
//  for(i=0;i<n;i++)
//  {
//    for(j=0;j<m;j++)
//    {
//      scanf("%d",&num);
//      if(num>max)
//      {
//        max = num;
//	x = i;
//	y = j;
//      }
//    }  
//  }
//  printf("%d %d\n",x+1,y+1);
//  return 0;
//}
//矩阵相等判断
//int main()
//{
//  int n = 0;
//  int m = 0;
//  scanf("%d %d",&n,&m);
//  int arr1[10][10] = {0};
//  int arr2[10][10] = {0};
//  int i = 0;
//  int j = 0;
//  for(i=0;i<n;i++)
//  {
//    for(j=0;j<m;j++)
//    {
//      scanf("%d",&arr1[i][j]);    
//    }  
//  }
//  for(i=0;i<n;i++)
//  {
//    for(j=0;j<m;j++)
//    {
//      scanf("%d",&arr2[i][j]);    
//    }  
//  } 
//  for(i=0;i<n;i++)
//  {
//    for(j=0;j<m;j++)
//    {
//      if(arr1[i][j] != arr2[i][j])
//      {
//        printf("No!\n");
//	return 0;      
//      }
//    }
//  }
//  printf("Yes\n");
//  return 0;
//}
//上三角矩阵的判断
int main()
{
  int n = 0;
  scanf("%d",&n);
  int arr[10][10] = {0};
  int i = 0;
  int j = 0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);    
    }  
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i>j)
      {
        if(arr[i][j]!=0)
	{
	  printf("No\n");
	  return 0;	
	}      
      }
    }
  }
  printf("Yes\n");  
  return 0;
}







