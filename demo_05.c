//一个项目中，跨文件使用变量时，先声明
extern int num;
//全局变量num的生命周期是整个项目的生命周期
//变量的生命周期指变量的创建到变量的销毁之前的一个时间段			
#include<stdio.h>
int main()
{
	{
		int num_2 = 200;//局部变量num_2的生命周期从进入作用域开始到出作用域结束
		printf("%d\n", num_2);
	}

	printf("%d\n", num);

	return 0;
}
