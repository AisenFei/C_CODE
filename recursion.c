#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void ShowInt(int x);
int Fact(int x);
//接受一个整型值（无符号），按照顺序打印她的每一位。
//例如：输入：1234，输出 1 2 3 4

//求5！

int main()
{
	printf("请输入你的数据#");
	int data = 0;
	scanf("%d", &data);

	ShowInt(data);
	printf("\n");
	//求5！
	printf("5! = %d\n", Fact(5));

	system("pause");
	return 0;
}

void ShowInt(int x)
{
	if (x > 9){
		ShowInt(x / 10);
	}
	printf("%d ", x % 10);

	//int arr[64];
	//int i = 0;
	//while (x > 0){
	//	arr[i] = x % 10;
	//	x /= 10;
	//	i++;
	//}
	//while (i > 0){
	//	i--;
	//	printf("%d ", arr[i]);
	//}
}

int Fact(int x){
	if (x == 1){
		return 1;
	}
	return x*Fact(x - 1);
}