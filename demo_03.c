//Title: ���ݵ������Լ�����
#include<stdio.h>
int main()
{
	// char			�ַ���������
	// short		������
	// int			����
	// long			������
	// long long	����������
	// float		�����ȸ�����
	// double		˫���ȸ�����

	//sizeof��һ�����������������ͻ��߱�����ռ�ռ�Ĵ�С
	//�����Ǽ�������������͵Ĵ�С����
	printf("%d\n", sizeof(char)); 
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	//int��long�������4����C���Ա�׼�У�sizeof(long)>=sizeof(int),������ʾ�Ľ����=
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}