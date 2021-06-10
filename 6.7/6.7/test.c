#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int x, int y)
{
	int z = 0;
	z = x> y ? x: y;
	return z;
}
int main()
{
	int num1= 20;
    int num2 = 10;//定义两个数，比较其大小，并给他们赋值
	int m = max(num1, num2);//定义一个函数
	printf("%d\n", m);
	return 0;
}


