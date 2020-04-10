#include<stdio.h>
#include<windows.h>
#pragma warning<disable:4996)

int main(){
	int flag = 1;
START:
	if (1 == flag){
		printf("gotoÌø×ªÖ®Ç°\n");
		flag++;
		goto START;
	}
	printf("hello goto\n");
	system("pause");
	return 0;
}