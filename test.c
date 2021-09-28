#include <stdio.h>
//给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到大排序输出。
int main()
{
  int n = 0;
  int arr[1000] = {0};
  scanf("%d",&n);
  int i = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);  
  }
  for(i=0;i<n-1;i++)
  {
    int j = 0;
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int tmp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = tmp;
      }
    }  
  }//冒泡排序的方法
  //去重
  for(i=0;i<n-1;i++)
  {
    if(arr[i] == arr[i+1])
    {
      //把i+1下标往后的元素全部往前覆盖
      int j = 0;
      for(j=i;j<n-1;j++)
      {
        arr[j] = arr[j+1];      
      }
      n--;
      i--;
    } 
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);  
  }
  printf("\n");
  return 0;
}
