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
	printf("你想的要第几个斐波那锲数？\n");
	scanf("%d", &n);
	printf("第%d个数为：%d", n,Fib(n));
	system("pause");
	return 0;
}