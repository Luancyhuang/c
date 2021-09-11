#include <stdio.h>
#include <ctype.h>
//输入一个字符，判断是否为字母
int main()
{
  int ch = 0;
  while((ch=getchar()) != EOF)
  {
    if(isalpha(ch))
    {
      printf("yes\n");
    }
    else
    {
      printf("no\n");
    }
    getchar();
  }
  return 0;
}
