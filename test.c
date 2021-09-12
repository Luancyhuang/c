#include <stdio.h>
//不使用累计乘积的基础上，通过移位运算(<<) 实现2的n次方的计算
//多组输入，每一行输入整数n(0 <= n < 31)
//针对每组输入输出对应的2的n次方的结果

int main()
{
  int n = 0;
  while(scanf("%d",&n) != EOF)
  {
    printf("%d\n",1<<n);
  }
  return 0;
}
