#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)

int main(){
	
	int a[5];
	memset(a, 1, sizeof(int)* 5);//memset �ڸ��Ƶ�ʱ�������ֽ�Ϊ������λ�ģ�
	//����������a����5��int��ÿ��int4���ֽڣ������0000 0001 0000 0001 0000 0001 0000 0001����16843009
	int i = 0;
	for (; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	char str[8];
	memset(str, 'a', 8);
	int j = 0;
	for (; j < 8; j++){
		printf("%c ", str[j]);
	}
	printf("\n");

	char str1[16];
	char str2[] = "hello world!";
	strcpy(str1, str2);

	printf("%s\n", str1);
	system("pause");
	return 0;
}