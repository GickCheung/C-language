#include<stdio.h>
int main()
{
	int time = 0;
	printf("���ѧϰ100��\n");
	
	while (time < 100)//ѭ�����
	{
		printf("�Ѿ����ѧϰ%d��\n", time);
		time++;
	}

	if (time == 100)
	{
		printf("�ջ��offer");
	}
	else
	{
		printf("��������˿");
	}


	return 0;
}