#include "contact.h"
void menu()
{
  printf("****************************\n");
  printf("***  1.add     2.del     ***\n");
  printf("***  3.search  4.modify  ***\n");
  printf("***  5.show    6.sort    ***\n");
  printf("***  0.exit              ***\n");
  printf("****************************\n");
}
int main()
{ 
  int input = 0;
  //创建通讯录
  struct contact con;//con 就是通讯录，里面包含1000个元素数组喝size.
  init_contact(&con);//初始化通讯录
  do
  {
    menu();
    printf("请选择：>");
    scanf("%d",&input);
    switch(input)
    {
      case ADD:
      add_contact(&con);
         break;
      case DEL:
         del_contact(&con);      
         break;
      case SEARCH:
         search_contact(&con);
         break;
      case MODIFY:
         modify_contact(&con);
         break;
      case SHOW:
         show_contact(&con);
         break;
      case SORT:
         break;
      case EXIT:
         printf("请退出!\n");
         break;
      default:
         printf("选择错误，请重新选择!\n");
         break;
    } 
  }while(input);

  return 0;
}
