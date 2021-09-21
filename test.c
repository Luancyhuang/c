#include <stdio.h>
//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
int main()
{
  int n = 0;
  int arr[1000] = {0};
  scanf("%d",&n);
  int i = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",arr[i]);
  } 
  for(i=0;i<n;i++)
  {
    //判断下标为i的元素是否在后面出现
    int j = 0;
    for(j=i+1;j<n;j++)
    {
      if(arr[i] == arr[j])
      {
        //去重，后面的元素往前覆盖
	int k = 0;
	for(k=j;k<n-1;k++)
	{
	  arr[k] = arr[k+1];
	}
        n--;
	j--;
      }    
    }    
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);  
  }
  return 0;
}
