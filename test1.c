#include <stdio.h>
#include <string.h>
//用户登录网站，通常需要注册，一半需要输入两遍密码，请编程判断输入的两次密码是否一致，一致输出"same"，不一致输出"different"。
int main()
{
  char password1[100] = {0};
  char password2[100] = {0};
  scanf("%s %s",&password1,&password2);
  if(strcmp(password1,password2) == 0)
  {
    printf("same\n");  
  }
  else
  {
    printf("different\n");  
  }
  return 0;
}
