#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int Fib(int n)
{
	if (n <= 2){
		return 1;
	}
	else{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("�����Ҫ�ڼ���쳲���������\n");
	scanf("%d", &n);
	printf("��%d����Ϊ��%d", n,Fib(n));
	system("pause");
	return 0;
}