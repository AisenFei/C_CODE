//编写代码实现，模拟用户登录情景，并且只能登录三次。
//只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序。
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#pragma warning(disable:4996)

#define SIZE 64
#define TRY_COUNT 3
#define DEFAULT_NAME "admin"
#define DEFAULT_PSD "bitnb"

int main()
{
	char name[SIZE];
	char passwd[SIZE];
	int count = TRY_COUNT;

	while (count > 0){
		printf("请输入你的账号# ");
		scanf("%s", name);
		printf("请输入你的密码# ");
		scanf("%s", passwd);

		if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
			printf("欢迎 %s 进入\n", name);
			break;
		}
		else{
			count--;
			printf("登陆失败，请检查你的用户名或密码！你还剩 [%d] 次机会\n",count);
		}
	}
	if (count == 0){
		printf("登录失败！ 请60S之后再试！");
		int _time = 1;
		while (_time <= 60){
			printf("离上次登录，已经过了...%d\r", _time);
			Sleep(1000);
			_time++;
		}
	}

	system("pause");
	return 0;
}