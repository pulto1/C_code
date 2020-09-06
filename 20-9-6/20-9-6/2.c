#define _CRT_SECURE_NO_WARNINDS 1
#include <stdio.h>
int main()
//main函数-程序的入口
//程序从main函数的第一行开始执行的
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
//C语言中的一个关键字
//sizeof(类型)-计算类型创建变量所开辟空间的大小
//size计算的大小单位是-字节
	return 0;
}