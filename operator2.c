#include<stdio.h>
#include<math.h>
#include<windows.h>
#pragma warning(disable:4996)

void print(int num)
{
	for (int i = 30; i >= 0; i -= 2){
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (int i = 31; i >= 1; i -= 2){
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);

	system("pause");
	return 0;
}