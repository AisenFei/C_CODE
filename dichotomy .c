#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	int a;
	printf("��������Ҫ�ҵ����֣�\n");
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
			printf("�����������±�Ϊ��%d\n", mid);
			break;
		}
	}
	if (start>end){
		printf("�ܱ�Ǹ���Ҳ�����\n");
	}
	system("pause");
	return 0;
}
