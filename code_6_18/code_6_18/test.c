#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ����������:��������ȡ���ػ���\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else 
	{		
		goto  again;
	}
    return 0;
}
