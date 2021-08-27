#include <stdio.h>

int main()
{
  int arr[10] = {0};
  int i = 0;
  FILE *pf = fopen("log.txt","w");
  for(i=0;i<10;i++)
  {
    arr[i] = i;
    fprintf(pf,"file:%s line:%d date:%s time:%s i:%d", __FILE__,__LINE__,__DATE__             ,__TIME__);
  }
  fclose(pf);
  pf = NULL;  
  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
