#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int a, int b)//���������庯��add
{
	int z = 0;
	z = a + b;

	return z;
}
int main1()
{
	//���´���ʵ���ú�����num1��num2���
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);

	int sum = add(num1, num2);//ʹ��add������num1��num2Ϊsum
	printf("%d\n", sum);

	return 0;
}