#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

char * mystrncat(char * destination, const char * source, size_t num)
{
	char *ret = destination;
	while (*destination){
		destination++;
	}
	int i = 0;
	while (*source && (i < num)){
		*destination = *source;
		destination++;
		source++;
		i++;
	}
	*destination = 0;
	return ret;
}

int main()
{
	char str1[20] = "abc";
	char *str2 = "123123";
	printf("%s\n", mystrncat(str1, str2, 6));
	system("pause");
	return 0;
}