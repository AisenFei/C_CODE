#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

void Swap(int *x, int *y)
{
	*x ^= *y;
	*y ^= *x;// y = y ^ (x ^ y);
	*x ^= *y;// x = (x ^ y) ^ x; 
	/*int temp = *x;
	*x = *y;
	*y = temp;*/
}

int CountOne(int a)
{
	int count = 0;
	while (a){
		a &= (a - 1);
		count++;
	}
	return count;

	//负数不行
	//int count = 0;
	//while (a != 0){
	//	if (a % 2){
	//		count++;
	//	}
	//	a /= 2;
	//}
	//return count;

	//正负都可以
	//int count = 0;
	//int i = 0;
	//while (i <sizeof(a)*8){
	//	if (a & (1 << i)){
	//		count++;
	//	}
	//	i++;
	//}
	//return count;
}
int main()
{
	int a = 10;
	int num = CountOne(a);
	printf("one : %d\n", num);

	//交换数字，通过异或
	int x = 0;
	int y = 0;
	printf("请输入# ");
	scanf("%d %d", &x, &y);
	printf("before: %d, %d\n", x, y);
	Swap(&x, &y);
	printf("after: %d, %d\n", x, y);
	//x >> 1 ;相当于x / 2;
	//x << 1 ;相当于x * 2;
	//int x = -1;
	//原：1000 0000 0000 0000 0000 0000 0000 0001
	//反：1111 1111 1111 1111 1111 1111 1111 1110
	//补：1111 1111 1111 1111 1111 1111 1111 1111  
	//int y = 10;// 0000 0000 0000 0000 0000 0000 0000 1010
	//y << 1;// 0000 0000 0000 0000 0000 0000 0000 10100
	system("pause");
	return 0;
}