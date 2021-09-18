#include <stdio.h>
//求五个人的身高平均值
//int main()
//{
//  int i = 0;
//  float hi = 0.0;
//  float sum = 0.0;
//  for(i=0;i<5;i++)
//  {
//    scanf("%f",&hi);
//    sum += hi;
//  }
//  printf("%.2f\n",sum/5.0);
//  return 0;
//}
//
int main()
{
  int state = 0;
  while(~scanf("%d",&state))
  {
    switch(state)
    {
      case 200:
          printf("OK\n");
          break;
      case 202:
	  printf("Accepted\n");
          break;
      case 400:
	  printf("Bad Request\n");
          break;
      case 403:
	  printf("Forbidden\n");
          break;
      case 404:
	  printf("Not Found\n");
          break;
      case 500:
	  printf("Internal server Error\n");
          break;
      case 502:
	  printf("Bad Gateway\n");
          break;
    }  
  }
  return 0;
}

