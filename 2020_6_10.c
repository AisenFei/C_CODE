#include<stdio.h>
#include<errno.h>
#include<windows.h>
#include<assert.h>
#pragma warning(disable:4996)

struct stu{
	char name[16];
	int age;
	char sex[8];
};

//�������޹أ��������ɵ���ɿ�����
//Ϊ�˰����ֽ�Ϊ��λ������ʹ��char���ͽ���copy
//void *my_memmove(void *dst,const void *src, size_t num)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	const char* src_p = (char*)src;
//	char* dst_p = (char*)dst;
//
//	if (dst_p > src_p && dst_p <src_p + num){
//		//��������
//		src_p = src_p + num - 1;
//		dst_p = dst_p + num - 1;
//		while (num > 0){
//			*dst_p = *src_p;
//			dst_p--;
//			src_p--;
//			num--;
//		}
//	}
//	else{
//		//��������
//		while (num > 0){
//			*dst_p = *src_p;
//			dst_p++;
//			src_p++;
//			num--;
//		}
//	}
//
//
//	return dst;
//}


//size_t ��c���Զ�unsigned�ķ�װ
//size_t myStrlen(const char *str)
//{
//	assert(str);
	//����һ
	//int length = 0;
	//while (*str){
	//	str++;
	//	length++;
	//}
	//return length;
	//����2
	//const char *start = str;
	//const char *end = str;
	//while (*end){
	//	end++;
	//}
	//return end - start;
	
	//������
//	if (*str == '\0'){
//		return 0;
//	}
//	else{
//		return 1 + myStrlen(str + 1);
//	}
//}

int main()
{
	const char *str = "hello world";
	printf("%d\n", myStrlen(str));

/*	int a[10];
	memset(a, 0, sizeof(a));*///�����ֽ�Ϊ��λ���и�ֵ����ÿ���ֽڶ���ֵ��Ϊvalue

	//char *str = "12345";
	//char *str1 = "12356";
	//printf("%d\n", memcmp(str, str1, 5));

	//vs2013�£�memcpy��memmove��ʹ����û�в��
	//char str[32] = "abcdefg123456";
	//int len = strlen(str);
	//memmove(str+3, str,len );

	//struct stu tom = { "tom", 19, "��" };
	//struct stu tom_copy;
	//memmove(&tom_copy, &tom, sizeof(tom));

	//struct stu tom = { "tom", 19, "��" };
	//struct stu tom_copy;
	//memcpy(&tom_copy, &tom, sizeof(tom));

	//mem*ϵ�еĺ����������ڴ���������������ǲ���ϵ���ͣ�ֻ���Ĳ������ֽ�����
	//mem*ϵ�к����������Ļ�����λ���ֽڣ�

	//int src[5] = { 11, 22, 33, 44, 55 };
	//int dst[5];
	//memcpy(dst, src, 8);

	//char str[] = "This Is a String";
	//int len = strlen(str);
	//for (int i = 0; i < len; i++){
	//	if (islower(str[i])){
	//		str[i] = toupper(str[i]);
	//	}
	//}
	//printf("%s\n", str);

	//strerror������ʹ������ת�����ַ���
	//printf("errno:%d\n", errno);
	//FILE *fp = fopen("test.txt", "r");
	//if (fp == NULL){
	//	printf("errno:%d\n", errno);
	//	printf("errno String: %s\n", strerror(errno));
	//	system("pause");
	//	return 1;
	//}

	//char str[] = "abcd,1234 xyz|789";
	//puts(str);
	//char *sub = strtok(str, ", |");
	////1.�����ڲ�ʹ��static�ֲ���������������ʷ�ַ�����ʣ���Ӵ�
	////2.���öԷָ�����������Ϊ\0�Ĳ����������Ӵ�����
	////3.strtok�����Ӵ���ȡ��ʱ�򣬲��õĲ����ǽ�ȡ��Ч�ַ���
	////4. �ָ��ʱ��strtok���Զ����зָ�������
	//while (sub){
	//	printf("%s\n", sub);
	//	sub = strtok(NULL, ", |");
	//}

	////strtok:�����������ַ����и�ģ����Ը����ض��ķָ������������������ַ����и
	//char str[] = "abcd,1234 xyz|789";
	//puts(str);
	//printf("%s\n",strtok(str, ", |"));//�޷�ʹ��һ��strtok�������е��Ӵ�
	////C��׼���õĲ����ǣ��ظ�ʹ��strtok������
	////��һ�δ�����Ч�ַ���,�ڶ���֮����һɫ����NULL����һ��������
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));
	//printf("%s\n", strtok(NULL, ", |"));

	//char str[] = "This is a simple string";
	//char *pch;
	//pch = strstr(str, "simple");
	//strncpy(pch, "sample", 6);
	//puts(str);

	//const char *str1 = "xyz, 123, abc, 123";
	//const char *str2 = "123";
	//printf("%s\n", strstr(str1, str2));


	//char str[][5] = { "R2D2", "C3PO", "R2A6" };
	//int n;
	//puts("Looking for R2 astromech droids...");
	//for (n = 0; n < 3; n++){

	//}

	//char *str1 = "abcdxyz123";
	//char *str2 = "abcdXyz456";
	//printf("%d\n",strncmp(str1,str2,5));

	//char str1[20];
	//char str2[20];
	//strcpy(str1, "To be ");
	//strcpy(str2, "or not to be");
	//strncat(str1, str2, 6);
	//puts(str1);

	//const char*str1 = "hello world!";
	//puts(str1);//����ӡ���

	//printf("hello world!:%s,%d", "abcd", 4);

	//const char *src = "abcdefg";
	//char dst[16] = "123456";
	//strncat(dst, src, 4);
	//strncat(dst, src, strlen(src)+1);

	//strncpy(dst, src, 0);
	//strncpy(dst, src, 4);
	//strncpy(dst, src, strlen(src) + 1);
	//printf("%s\n", dst);
	system("pause");
	return 0;
}