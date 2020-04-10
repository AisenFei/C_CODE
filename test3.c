//求最大值
//求10个整数中最大值

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int main(){
	int array[10];
	int i = 0;
	for (; i < 10; i++){
		scanf("%d", &array[i]);
	}
	int max = array[0];
	for (i = 1; i < 10; i++){
		if (array[i] > max){
			max = array[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}