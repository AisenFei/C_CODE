#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 4; j++){
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 4; j++){
			printf("%d ", arr[i][j]);
		}
	}
	system("pause");
	return 0;
}