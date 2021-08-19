#include <stdio.h>
#include <string.h>
#include <assert.h>
struct s
{
   char name[20];
   int age;
};
void *my_memcpy(void *dest,const void *src,size_t num)
{
   assert(dest && src);
   char *ret = dest;
   while(num--)
   {
     *(char*)dest = *(char*)src;
     (char*)++dest;
     (char*)++src;
   }
}
int main()
{
  int arr1[] = {1,2,3,4,5};
  int arr2[5] = {0};
  int i = 0;
  struct s arr3[] = {{"张三",20},{"李四",19}};
  struct s arr4[3] = {0};
  my_memcpy(arr4,arr3,sizeof(arr3));
  my_memcpy(arr2,arr1,sizeof(arr1));
  for(i=0;i<5;i++)
  {
   printf("%d ",arr2[i]);
  }
  return 0;
}
