#include <stdio.h>
//BoBo老师教了KiKi学习程序设计基础，他知道C++是带类的C语言，这个“++”主要包含三部分内容：对C语言进行语法上的扩展、面向对象（封装、继承和多态），STL（即模板）。这学期KiKi学习了C和C++，学号他们，其他编程语言都可以很轻松地掌握。C和C++的输入有区别，请帮KiKi输出C和C++输出hello world的代码。 
//int main()
//{
//  printf("printf(\"hello,world!\\n\");\n");
//  printf("cout << \"hello,world!\" << end1;\n");
//  return 0;
//}
//KiKi知道了什么事质数（只能被1和他自身整除的数），他现在想知道多有三位整数中，有多少个质数。
int is_prime(int n)
{
  //拿2～n-1之间数整除
  int j = 0;
  for(j=2;j<=n-1;j++)
  {
    if(n%j==0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int i = 0;
  int count = 0;
  for(i=100;i<=999;i++)
  {
    if(is_prime(i)==1)
    count++;  
  }
  printf("%d\n",count);
  return 0;
}

