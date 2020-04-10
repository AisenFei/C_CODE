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
	printf("..............游戏开始..............\n");
	srand((unsigned int)time(NULL));

	int data = rand() % 100 + 1;
	for (;;){
		printf("Guess: ");
		int x = 0;
		scanf("%d", &x);

		if (x > data){
			printf("你猜大了！\n");
		}
		else if (x < data){
			printf("你猜小了！\n");
		}
		else{
			printf("恭喜你，猜对了，数字是： %d\n", data);
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
			printf("要不要再搞一把？\n");
			break;
		case 2:
			quit = 1;
			printf("Game End!\n");
			break;
		default:
			printf("你的输入有误，请重新输入！\n");
			break;
		}
	}

	system("pause");
	return 0;
}