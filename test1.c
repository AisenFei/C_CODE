//数9的个数
//编写程序数一下1到100的所有整数中出现多少个数字9
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	int num = 0;
	for (int i = 1; i <= 100; i++){
		if (i % 10 == 9){
			num++;
		}
		if (i / 10 == 9){
			num++;
		}
	}
	printf("%d\n", num);

	system("pause");
	return 0;
}