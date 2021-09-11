#include <stdio.h>
//字符金字塔
int main()
{
  //输入一个字符
  char ch = 0;
  ch = getchar();
  //输出金字塔
  int i = 0;
  //每循环一次，打印一行
  //每一行由两部分组成，一是空格，二是字符
  for (i=0;i<5;i++)
  {
    //空格
    int j = 0;
    for(j=0;j<4-i;j++)
    {
      printf(" ");
    }
    //字符
    for(j=0;j<=i;j++)
    {
      printf("%c ",ch);
    }
    printf("\n");
  }
  return 0;
}
