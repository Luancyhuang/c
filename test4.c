#include <stdio.h>
//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。
int main()
{ 
  int n = 0;//个数
  int arr[40] = {0};//存放是成绩
  scanf("%d",&n);
  int i = 0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  //冒泡排序
  for(i=0;i<n-1;i++)
  {
    int j = 0;
    for(j=0;j<n-1-i;j++)
    {
      if(arr[j] > arr[j+1])
      {
        int tmp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = tmp;
      }
    }
  }
  for(i=n-1;i>=n-5;i--)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
