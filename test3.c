#include <stdio.h>
//求数字对应的ascii码
int main()
{
  //arr 是数组，数组是用下标来访问，下标是从0开始的。
  char arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
  int i = 0;
  //求数组元素个数
  int sz = sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<sz;i++)
  {
    printf("%c ",arr[i]);
  }
  printf("\n");
  return 0;
}
