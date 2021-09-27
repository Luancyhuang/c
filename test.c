#include <stdio.h>
//老师给小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//int main()
//{
//  int n = 0;
//  int arr[10001]={0};
//  scanf("%d",&n);
//  int i = 0;
//  int tmp = 0;
//  for(i=0;i<n;i++)
//  {
//    scanf("%d",&tmp);
//    arr[tmp] = tmp;   
//  }
//  for(i=0;i<n;i++)
//  {
//    if(arr[i]!=0)
//    {
//      printf("%d ",arr[i]);    
//    }  
//  }
//  return 0;
//}
//
//在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题，大家都知道china的英文缩写是CHN ，那么给你一个字符串s，你需要做的是统计S中字串“CHN”的个数。
int main()
{ 
  char str[5000] = {0};
  scanf("%s",&str);
  int c = 0;
  int ch = 0;
  int chn = 0;
  char *p = str;
  while(*p)
  {
    if(*p=='c')
      c++;
    else if(*p=='h')
      ch += 'c';
    else if(*p=='n')
      chn += ch;
    p++;
  }
  printf("%d\n",chn);
  return 0;
}
