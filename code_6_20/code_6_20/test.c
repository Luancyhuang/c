#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int n1, n2;
    puts("����������������");
	printf("����A��"); scanf("%d", &n1);
	printf("����B��"); scanf("%d", &n2);
    printf("���ǵĺ���%d,����%d��\n",n1+n2,n1*n2);*/
	
	//int nu1 = 9.9;
	//double nu2 = 9.9;
	//
	//printf("int�ͱ�����ֵ�ǣ�%d\n", nu1 );
	//printf("double�ͱ�����ֵ�ǣ�%f\n", nu2);
	
	char i, j, k;
	for (i = 'X'; i <= 'Z'; i++)
		for (j = 'Z'; j <= 'Z'; j++)
			if (i != j)
				for (k = 'X'; k <= 'Z'; k++)
					if (i != k && j != k)
						if (i != 'X '&& k != 'X' && k != 'Z')
							printf("Avs%c\tBvs%c\tCvs%c\n", i, j, k);
return 0;
}