#include "contact.h"
void init_contact(struct contact *ps) 
{
 //设置通讯录最初只有0个元素
  memset(ps->data,0,sizeof(ps->data));
  ps->size = 0;
}
void add_contact(struct contact *ps)
{
  if(ps->size == MAX)
  {
    printf("通讯录已经满,无法增加!\n");
  }
  else 
  {
    printf("请输入姓名：>");    
    scanf("%s",ps->data[ps->size].name);
    printf("请输入年龄：>");    
    scanf("%d",&(ps->data[ps->size].age));
    printf("请输入性别：>");    
    scanf("%s",ps->data[ps->size].sex);
    printf("请输入电话：>");    
    scanf("%s",ps->data[ps->size].tele);
    printf("请输入地址：>");    
    scanf("%s",ps->data[ps->size].addr);
    ps->size++;
    printf("添加用户成功！\n"); 
  }
}
void show_contact(const struct contact *ps)
{
   if(ps->size == 0)
   {
     printf("通讯录为空!\n");
   }  
   else
   {
     int i = 0;
     printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
            "姓名","年龄",
            "性别","电话","地址");
     for(i=0;i<ps->size;i++)
     {
       printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
              ps->data[i].name,
              ps->data[i].age,
              ps->data[i].sex,
              ps->data[i].tele,
              ps->data[i].addr);
     }
   } 
}
static int find_name(const struct contact *ps,char name[MAX_NAME])
{
   
  int i = 0;
  for(i=0;i<ps->size;i++)
  {
    if(0 ==  strcmp(ps->data[i].name,name))
    {     
      return i;
    }
  }
  return -1;

}
void del_contact(struct contact *ps)
{
  char name[MAX_NAME];
  printf("请输入要删除人的姓名:>");  
  scanf("%s",name);
  //1.查找要删除的人在什么位置
  int pos = find_name(ps,name);//找到了返回姓名所在元素的下标，找不到返回-1
  if(pos == -1)
  {
    printf("要删除的人不存在!\n");
  }
  //2.删除
  else 
  {
    int j = 0;
    for(j=pos;j<ps->size-1;j++)
    {
      ps->data[j] = ps->data[j+1];
      ps->size--;
      printf("删除成功！\n");
    }
  }
}  
   
void search_contact(const struct contact *ps)
{
   char name[MAX_NAME];
   printf("请输入要查找人的姓名:>");
   scanf("%s",name);
   int pos = find_name(ps,name);
   if(pos = -1)
   {
     printf("要查找的人不存在\n");
   }
   else
   {
     printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n",
            "姓名","年龄",
            "性别","电话","地址");
     printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
              ps->data[pos].name,
              ps->data[pos].age,
              ps->data[pos].sex,
              ps->data[pos].tele,
              ps->data[pos].addr);
   }
}
void modify_contact(struct contact *ps)
{
   char name[MAX_NAME];
   printf("请输入修改的人的姓名:>");
   scanf("%s",name);
   int pos = find_name(ps,name);
   if(pos == -1)
   {
     printf("要修改人不存在");
   } 
   else
   {
     printf("请输入姓名：>");    
     scanf("%s",ps->data[pos].name);
     printf("请输入年龄：>");    
     scanf("%d",&(ps->data[pos].age));
     printf("请输入性别：>");    
     scanf("%s",ps->data[pos].sex);
     printf("请输入电话：>");    
     scanf("%s",ps->data[pos].tele);
     printf("请输入地址：>");    
     scanf("%s",ps->data[pos].addr);
     printf("修改完成");
   }
}
