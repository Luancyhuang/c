#include <stdio.h>
//井字棋
int main()
{
  char arr[3][3] = {0};
  int i = 0;
  int j = 0;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf(" %c",arr[i][j]);
    }
  }
  //判断输赢
  char flag = 'o';
  for(i=0;i<3;i++)
  {
    if(arr[i][0]==arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != 'o')
    {
      flag = arr[i][1];
      break;    
    }  
    if(arr[0][i]==arr[1][i] && arr[1][i] == arr[2][i] && arr[1][0] != 'o')
    {
      flag = arr[1][i];
      break;    
    }  
  }
  if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != 'o')
  {
    flag = arr[0][0];
  }
  if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != 'o')
  {
    flag = arr[0][2];
  }
  if(flag == 'k')
  {
    printf("kiki wins!\n");
  }
  else if(flag == 'b')	  
  {
    printf("bobo wins!\n");
  }
  else 
  {
    printf("no winers!\n");
  }
  return 0;
}

