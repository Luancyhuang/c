#include <stdio.h>
//据说智商超过140以上都称之为天才，kiki想知道自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出‘Genius
//int main()
//{
//  int iq = 0;
//  //while(scanf("%d",&iq) != EOF)
//  while(~scanf("%d",&iq))
//  {
//    if(iq>=140)
//      printf("Genius\n");
//  }
//  return 0;
//}
//
//int main()
//{
//  int score = 0;
//  while(~scanf("%d",&score))
//  {
//    if(score>=90&&score<=100)
//    {
//      printf("perfect!\n",score);
//    }
//  }
//  return 0;
//}

//三科成绩比较大小
int main()
{
  int chinese = 0;
  int math = 0;
  int english = 0;
  while(~scanf("%d%d%d",&chinese,&math,&english))
  {
    int max = chinese>math?chinese:math;
    max = max>english?max:english;    
    printf("%d\n",max);
  }
  return 0;
}

