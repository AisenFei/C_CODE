//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
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
		printf("����������˺�# ");
		scanf("%s", name);
		printf("�������������# ");
		scanf("%s", passwd);

		if (strcmp(name, DEFAULT_NAME) == 0 && strcmp(passwd, DEFAULT_PSD) == 0){
			printf("��ӭ %s ����\n", name);
			break;
		}
		else{
			count--;
			printf("��½ʧ�ܣ���������û��������룡�㻹ʣ [%d] �λ���\n",count);
		}
	}
	if (count == 0){
		printf("��¼ʧ�ܣ� ��60S֮�����ԣ�");
		int _time = 1;
		while (_time <= 60){
			printf("���ϴε�¼���Ѿ�����...%d\r", _time);
			Sleep(1000);
			_time++;
		}
	}

	system("pause");
	return 0;
}