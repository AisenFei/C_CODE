#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define NUM 5

void exchange(int arr1[], int arr2[])
{
	int i = 0;
	for (; i < NUM; i++){
		int temp = 0;
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int a[NUM] = { 1, 2, 3, 4, 5 };
	int b[NUM] = { 6, 7, 8, 9, 10 };
	exchange(a, b);
	int i = 0;
	printf("a数组的内容为：\n");
	for (; i < NUM; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b数组的内容为：\n");
	for (i = 0; i < NUM; i++){
		printf("%d ", b[i]);
	}
	system("pause");
	return 0;
}