//一球从100m高度自由落下，每次落地反跳回原高度的一半，再落下。求它在第10次落地时，共经过了多少m?第10次反弹多高？

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
	printf("第10次落地时共经过%fm。\n", sn);
	printf("第10次反弹%fm。\n", hn);
	return 0;
}
