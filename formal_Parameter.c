#include<stdio.h>
#include<Windows.h>

void test1(int _a[])
{
	printf("a�����ܳ���%d, ÿ��Ԫ����ռ����%d\n", sizeof(_a), sizeof(_a[0]));
}

void test2(int _b[])
{
	printf("b�����ܳ���%d, ÿ��Ԫ����ռ����%d\n", sizeof(_b), sizeof(_b[0]));
}

void test3(double _x)
{
	printf("x��%d\n", sizeof(_x));
}
int main(){
	char a[10];
	int b[10];
	double x = 0.0;
	printf("a�����ܳ���%d,ÿ��Ԫ����ռ����%d\n", sizeof(a), sizeof(a[0]));
	printf("b�����ܳ���%d,ÿ��Ԫ����ռ����%d\n", sizeof(b), sizeof(b[0]));
	test1(a);
	test2(b);
	test3(x);

	system("pause");
	return 0;
}