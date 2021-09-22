#include <stdio.h>

int main()
{
  int n = 0;
  int arr[40] = {0};
  scanf("%d",&n);
  int i = 0;
  while(n)
  {
    arr[i] = n%6;
    i++;
    n/=6;
  }
  for(i--;i>=0;i--)
  {
    printf("%d",arr[i]);
  }
  printf("\n");
  return 0 ;
}
