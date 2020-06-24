#include<stdio.h>
#include<assert.h>
#include<Windows.h>
#pragma warning(disable:4996)


//���⣺һ��������ֻ�����������ǳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����

void FindTwo(int a[], int num, int *x, int *y)
{
	assert(a);
	assert(num > 1);
	assert(x);
	assert(y);
	//�������
	int result = a[0];
	for (int i = 1; i < num; i++){
		result ^= a[i];
	}
	int pos = 1;
	while (1){
		if (result & pos){
			break;
		}
		pos <<= 1;
	}
	for (int i = 0; i < num; i++){
		if (a[i] & pos){
			*x ^= a[i];
		}
		else{
			*y ^= a[i];
		}
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 12, 1, 2, 3, 4, 5, 6, 7, 8 };
	int num = sizeof(a) / sizeof(a[0]);
	int x = 0;
	int y = 0;
	FindTwo(a, num, &x, &y);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}