//һ���100m�߶��������£�ÿ����ط�����ԭ�߶ȵ�һ�룬�����¡������ڵ�10�����ʱ���������˶���m?��10�η�����ߣ�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int mian()
{
	float sn = 100, hn = sn / 2;
	int n;
	for(n=2;n<=10;n++)
	{
		sn += 2 * hn;
		hn = hn / 2;
	}
	printf("��10�����ʱ������%fm��\n", sn);
	printf("��10�η���%fm��\n", hn);
	return 0;
}
