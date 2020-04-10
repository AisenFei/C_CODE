//³Ë·¨¿Ú¾÷±í

#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main(){
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d=%d ", i, j, i*j);
			if (i == j){
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}