#include <stdio.h>
//老师给小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
int main()
{
  int n = 0;
  int arr[10001]={0};
  scanf("%d",&n);
  int i = 0;
  int tmp = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&tmp);
    arr[tmp] = tmp;   
  }
  for(i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      printf("%d ",arr[i]);    
    }  
  }
  return 0;
}
