#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}