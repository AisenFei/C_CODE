#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void BubbleSort(int *arr, int num)
{
	int i = 0;
	for (; i < num - 1; i++){
		int j = 0;
		for (; j < num - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void Show(int arr[], int num)
{
	int i = 0;
	for (; i < num; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 2, 3, 5, 1, 3, 4, 2, 8, 6, 4, 3, 2, 4, 2 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Show(arr, num);
	BubbleSort(arr, num);
	Show(arr, num);
	printf("%d", sizeof((2, 1)));
	system("pause");
	return 0;
}