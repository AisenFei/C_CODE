#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

struct A{
	int num;
	char arr[0];//柔型数组
};

//1.在struct里面
//2.一定是最后一个元素
//3.元素个数为0
//4.柔性数组名代表的数组，本身不占结构体空间大小

int main()
{
	struct A *p = malloc(sizeof(struct A) + 100 * sizeof(char));

	p->num = 100;
	for (int i = 0; i < p->num; i++){
		p->arr[i] = i;
	}
	free(p);
	system("pause");
	return 0;
}