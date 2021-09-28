#include <stdio.h>

//int main()
//{
//  int n = 0;
//  int arr[1001] = {0};//拿空间换取时间
//  scanf("%d",&n);
//  
//  int i = 0;
//  int m = 0;
//  //循环两次
//  for(i=0;i<n;i++)
//  {
//    scanf("%d",&m);
//    arr[m] = m;
//  }
//
//  for(i=0;i<=1000;i++)
//  {
//    if(arr[i]!=0)
//    {
//      printf("%d ",arr[i]);    
//    }  
//  }
//  return 0;
//}
//
//
struct Node
{
  int data;
  struct Node *next;
}
int main()
{
  struct Node *list = NULL;
  struct Node *tail = NULL;

  int n = 0;
  scanf("%d",&n);

  int i = 0;
  int m = 0;
  int d = 0;//要删除的元素
  for(i=0;i<n;i++)
  {
    scanf("%d",&m);
    struct Node *pn = (struct Node*) malloc(sizeof(struct Node));
    pn->data = m;
    pn->next = NULL;
    
    if(list == NULL)
    {
      list = pn;
      tail = pn;    
    }
    else
    {
      tail->next = pn;
      tail = pn;    
    }
  }
  scanf("%d",&d);//接收要删除的元素
  //删除链表中指定的元素
  struct Node *cur = list;
  struct Node *prev = NULL;
  while(cur)
  {
    if(cur->data == d)
    {
      //删除
      //删除第一个节点
      struct Node *pd = cur;
      if(cur == list)
      {
        list = list->next;
	cur = list;      
      }
      else
      {
        prev->next = cur->next;
	cur = prev->next;
      }
      free(pd);
      n--;
    }
    else 
    {
      cur = cur->next;
    }  
  }
  printf("%d\n",n);
  cur = list;
  while(cur)
  {
    printf("%d ",cur->data);
    cur = cur->next;  
  }
  //释放单链表
  cur = list;
  struct Node *del = NULL;
  while(cur)
  {
    del = cur;
    cur = cur->next;
    free(del);   
  }
  list = NULL;
  return 0;
}
