#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void Menu(){
	printf("###########################################\n");
	printf("## 1. Guess                      2. Quit ##\n");
	printf("###########################################\n");
	printf("Please Select> ");
}
void Game()
{
	printf("..............��Ϸ��ʼ..............\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("��´��ˣ�\n");
		}
		else if (x < data){
			printf("���С�ˣ�\n");
		}
		else{
			printf("��ϲ�㣬�¶��ˣ������ǣ� %d\n", data);
			break;
		}
	}
}
int main(){
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			printf("Ҫ��Ҫ�ٸ�һ�ѣ�\n");
			break;
		case 2:
			quit = 1;
			printf("Game End!\n");
			break;
		default:
			printf("��������������������룡\n");
			break;
		}
	}

	system("pause");
	return 0;
}