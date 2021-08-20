#pragma once
 
#include <stdio.h>
#include <string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30 
enum option 
{
   EXIT,//0
   ADD,//1
   DEL,//2
   SEARCH,//3
   MODIFY,//4
   SHOW,//5
   SORT//6
};
struct pep_info
{
  char name[MAX_NAME];
  int age;
  char sex[MAX_SEX];
  char tele[MAX_TELE];
  char addr[MAX_ADDR];   
};
//定义通讯录类型
struct contact 
{
  struct pep_info data[MAX];//存放一个信息
  int size;//记录当前已经有的元素个数  
};

void init_contact(struct contact *ps);
void add_contact(struct contact *ps);
void show_contact(const struct contact *ps);
void del_contact(struct contact *ps);      
void search_contact(const struct contact *ps);
void modify_contact(struct contact *ps);

