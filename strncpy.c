#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void mystrncpy(char *des, const char *source, size_t num)
{
	int i = 0;
	while (*source && (i < num)){
		*des = *source;
		des++, source++;
		i++;
	}
	*des = 0;
}

int main()
{
	char str1[20];
	char *str2 = "To be or not";
	mystrncpy(str1, str2, 5);
	printf("%s\n", str1);
	system("pause");
	return 0;
}