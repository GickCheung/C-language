//Title: scanf��VS2022�е�ʹ��
#define _CRT_SECURE_NO_WARNINGS//��VS2022��ʹ��scanf�����ڳ���ĵ�һ����������
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d", &a);
	b = a + 1;

	printf("%d\n", b);
	return 0;
}