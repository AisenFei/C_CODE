#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)

void reverse_string(char *arr)
{
	int len = strlen(arr);
	char temp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2){
		reverse_string(arr + 1);
	}
	*(arr + len - 1) = temp;
}

int main()
{
	char arr[] = { 'a', 'b', 'c', 'd', '\0' };
	reverse_string(arr);
	for (int i = 0; i < strlen(arr); i++){
		printf("%c", arr[i]);
	}
	system("pause");
	return 0;
}