//��9�ĸ���
//��д������һ��1��100�����������г��ֶ��ٸ�����9
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	int num = 0;
	for (int i = 1; i <= 100; i++){
		if (i % 10 == 9){
			num++;
		}
		if (i / 10 == 9){
			num++;
		}
	}
	printf("%d\n", num);

	system("pause");
	return 0;
}