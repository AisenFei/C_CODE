#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void init(int arr[],int num)
{
	int i = 0;
	for (; i < num; i++){
		arr[i] = 0;
	}
}

void print(int arr[], int num)
{
	int i = 0;
	for (; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int num)
{
	int i = 0;
	int len = num;
	while (len >= 2){
		int temp = 0;
		temp = arr[i];
		arr[i] = arr[num - 1 - i];
		arr[num - 1 - i] = temp;
		i++;
		len -= 2;
	}
}

int main()
{
	int arr1[5];
	init(arr1, 5);
	print(arr1, 5);
	int arr2[] = { 1, 2, 3, 4, 5 };
	int num = sizeof(arr2) / sizeof(arr2[0]);
	reverse(arr2, num);
	print(arr2, num);
	
	system("pause");
	return 0;
}