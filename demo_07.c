#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;

	printf("ѧϰC���ԡ�\n");
	printf("�Ƿ�Ҫ�ú�ѧϰ���ǻش�1����ش�0\n");
	scanf("%d", &num1);
	num1++;

	if (num1 > 1)//ѡ�����
	{
		printf("�ջ��offer");
	}
	else
	{
		printf("��������˿");
	}

	return 0;
}