#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

struct A{
	int num;
	char arr[0];//��������
};

//1.��struct����
//2.һ�������һ��Ԫ��
//3.Ԫ�ظ���Ϊ0
//4.������������������飬����ռ�ṹ��ռ��С

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