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
    int num2 = 10;//�������������Ƚ����С���������Ǹ�ֵ
	int m = max(num1, num2);//����һ������
	printf("%d\n", m);
	return 0;
}


