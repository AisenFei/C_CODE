#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	int a;
	printf("请输入你要找的数字：\n");
	scanf("%d", &a);
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int start = 0;
	int end = sizeof(array) / sizeof(array[0]) - 1;
	while (start <= end){
		int mid = (start + end) / 2;;
		if (a > array[mid]){
			start = mid + 1;
		}
		else if (a < array[mid]){
			end = mid - 1;
		}
		else{
			printf("该数字所在下标为：%d\n", mid);
			break;
		}
	}
	if (start>end){
		printf("很抱歉，找不到！\n");
	}
	system("pause");
	return 0;
}
