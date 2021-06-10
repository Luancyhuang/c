#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float height= 0.0;
	float sum = 0.0;
	int i = 0;
	for (i = 0; i <5; i++) 
	{
		scanf("%f%", &height);
		sum = sum + height;
    }
	float average = sum / 5;
    printf("%.2f\n", average);//.2f表示保留小数点后两位
return 0;
}