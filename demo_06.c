//Title: ����
#include<stdio.h>
int main()
{
	15;//���泣�����ǳ������ַ����ַ���
	'a';
	'abc';

	const int num = 100;//const���εĳ������������Ǳ��������г�����
	printf("%d\n", num); 
	
	#define max 10000//#define����ı�ʶ��������max=10000�����ܸ���
	printf("%d\n", max);

	//ö�ٳ���������һһ�оٵĳ���
	enum  sex//���ö�ٳ����ı�����δ��ȡֵ��man��woman����
	{
		man,
		woman,	
	};

	printf("man = %d\n", man);
	printf("woman = %d\n", woman);//ö�ٳ���Ĭ�ϴ�0��ʼ�����Ǹ���ֵ��һ������ֵ֮���ܸı�

	return 0;
}