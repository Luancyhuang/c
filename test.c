#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//  bool x = true;
//  if(x)
//  {
//    printf("hehe\n");
//  }
//  else 
//  {
//    printf("haha\n");
//  }
//  int a = 0;
//  printf("%d\n",a);
//  return 0;  
//}
//int main()
//{
//  int day = 0;
//  int quit = 0;
//  while(!quit)
//  {
//    printf("请输入日期");
//    scanf("%d",&day);
//    switch(day)
//    {
//      case 1:
//	      printf("周一\n");
//	      break;
//      case 2:
//	      printf("周二\n");
//	      break;
//      case 3:
//	      printf("周三\n");
//	      break;
//      case 4:
//	      printf("周四\n");
//	      break;
//      case 5:
//	      printf("周五\n");
//	      break;
//      case 6:
//	      printf("周六\n");
//	      quit = 1;
//	      break;
//      case 7:
//	      printf("周末\n");
//	      break;
//      default:
//	      printf("你输入的有误，请重新输入\n");
//	      break;    
//    }  
//  }
//  return 0;
//}
//int main()
//{
//  int count = 10;
//  while(count>=0)
//  {
//    printf("hello,world\n");
//    count--; 
//  }
//  return 0;
//}
//
int main()
{
  while(1)
  {
    int ret = getchar();
    if(ret == '#')
    {
      break;  
    } 
    printf("%c ",ret);      
  }
  return 0;
}

