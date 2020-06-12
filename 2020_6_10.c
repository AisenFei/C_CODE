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

//与类型无关，但是依旧得完成拷贝！
//为了按照字节为单位，我们使用char类型进行copy
//void *my_memmove(void *dst,const void *src, size_t num)
//{
//	assert(dst != NULL);
//	assert(src != NULL);
//	const char* src_p = (char*)src;
//	char* dst_p = (char*)dst;
//
//	if (dst_p > src_p && dst_p <src_p + num){
//		//从右向左
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
//		//从左向右
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


//size_t 是c语言对unsigned的封装
//size_t myStrlen(const char *str)
//{
//	assert(str);
	//方法一
	//int length = 0;
	//while (*str){
	//	str++;
	//	length++;
	//}
	//return length;
	//方法2
	//const char *start = str;
	//const char *end = str;
	//while (*end){
	//	end++;
	//}
	//return end - start;
	
	//方法三
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
	memset(a, 0, sizeof(a));*///按照字节为单位进行赋值，把每个字节都赋值成为value

	//char *str = "12345";
	//char *str1 = "12356";
	//printf("%d\n", memcmp(str, str1, 5));

	//vs2013下，memcpy和memmove在使用上没有差别
	//char str[32] = "abcdefg123456";
	//int len = strlen(str);
	//memmove(str+3, str,len );

	//struct stu tom = { "tom", 19, "男" };
	//struct stu tom_copy;
	//memmove(&tom_copy, &tom, sizeof(tom));

	//struct stu tom = { "tom", 19, "男" };
	//struct stu tom_copy;
	//memcpy(&tom_copy, &tom, sizeof(tom));

	//mem*系列的函数，叫做内存操作函数，本质是不关系类型，只关心操作的字节数。
	//mem*系列函数，操作的基本单位是字节！

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

	//strerror作用是使错误码转化成字符串
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
	////1.函数内部使用static局部变量，来保存历史字符串的剩余子串
	////2.采用对分隔符进行设置为\0的策略来进行子串划分
	////3.strtok进行子串截取的时候，采用的策略是截取有效字符串
	////4. 分割的时候，strtok会自动进行分隔符过略
	//while (sub){
	//	printf("%s\n", sub);
	//	sub = strtok(NULL, ", |");
	//}

	////strtok:是用来进行字符串切割的，可以根据特定的分隔符（集），来进行字符串切割；
	//char str[] = "abcd,1234 xyz|789";
	//puts(str);
	//printf("%s\n",strtok(str, ", |"));//无法使用一次strtok返回所有的子串
	////C标准采用的策略是：重复使用strtok函数，
	////第一次传入有效字符串,第二次之后，清一色传入NULL（第一个参数）
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
	//puts(str1);//纯打印输出

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