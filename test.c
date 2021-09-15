#include <stdio.h>
//根据输入输出相应的内容
//int main()
//{
//  int n = 0;
//  while(~scanf("%d",&n))
//  {
//    if(n>0)
//    {
//      printf("%d\n",1);
//    }
//    else while(n<0)
//    {
//      printf("%.1f\n",0.5);
//    }
//    else
//    {
//      printf("%d\n",0);
//    }
//  }
//  return 0;
//}
//三角形的判断
int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  while(~scanf("%d%d%d",&a,&b,&c))
  {
    //1.判断是否为三角形
    if((a+b>c)&&(a+c>b)&&(b+c>a)) 
    {
      if((a==b) && (b==c))
      {
        printf("等边三角形\n");
      }
      else if((a==b&& a!=c)||(a==c&&a!=b)||(b==c && b!=a))
      {
        printf("等腰三角形\n");
      }
      else
      {
        printf("一般三角形\n");
      }
    }
    else//不是三角形
    {
      printf("不是三角形\n");
    }
  }
  return 0;
}












