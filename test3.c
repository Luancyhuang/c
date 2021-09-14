#include <stdio.h>

//int main()
//{
//  int score[3] = {0};
//  while(~scanf("%d%d%d",&score[0],&score[1],&score[2]))
//  {
//    int i = 0;
//    int max = score[0];
//    for(i=0;i<3;i++)
//    {
//      if(max<score[i])
//      {
//        max = score[i];
//      }
//    }
//    printf("%d\n",max); 
//  }
//  return 0;
//}
//
//判断一个字母是否为元音字母
int main()
{
  int ch = 0;
  char vowel[] = "AaEeIiOoUu";
  while((ch = getchar())!= EOF)
  {
    //判断是否为元音字母
    int i = 0;
    for(i=0;i<10;i++)
    {
      if(ch == vowel[i])
      {
        printf("vowel\n");
	break;
      }
    }
    if(i==10)
    {
      printf("consonant\n");   
    }
    getchar();
  }
  return 0;
}
