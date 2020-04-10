//分数求和
//计算1/1-1/2+1/3-1/4......+1/99-1/100的值，打印出结果
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);

	system("pause");
	return 0;
}