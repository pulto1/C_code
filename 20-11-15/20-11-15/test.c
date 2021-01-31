#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX(X,Y)   ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int ret = MAX(a++, b++);
	//	int ret = ((a++) > (b++) ? (a++) : (b++));
	printf("a = %d b=%d\n", a, b);
	printf("%d\n", ret);

	return 0;
}

//#define CAT(X,Y) X##Y
////## 
////Class91
//
//
//int main()
//{
//	int Class91 = 2020;
//	printf("%d\n", CAT(Class, 91));
//	//2020
//	return 0;
//}

//#define PRINT(FORMAT, X) printf("the value of "#X" is "FORMAT"\n", X)
//
//int main()
//{
//	int a = 100;
//	int b = 100;
//	float f = 5.5f;
//	PRINT("%d", a);
//	PRINT("%d", b);
//	PRINT("%f", f);
//
//	//print(a);
//	//print(b);
//
//	//printf("the value of a is %d\n", a);
//	//printf("the value of b is %d\n", b);
//
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	return 0;
//}

////#define MAX(X,Y)   (X>Y?X:Y)
////
////int Max(int x, int y)
////{
////	return x > y ? x : y;
////}
////#define SQUARE(X) (X)*(X)
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	/*char*p = "MHEHEH";*/
//	/*printf("%d\n", SQUARE(5));*/
//	/*printf("%d\n", SQUARE(4+1));*/
//	printf("%d\n", 10*DOUBLE(100));
//
//
//	//int a = 10;
//	//int b = 20;
//	//int max = MAX(a, b);
//	//printf("max = %d\n", max);
//
//	//max = Max(a, b);
//	//printf("max = %d\n", max);
//
//	return 0;
//}

//#define MAX 100;
//int main()
//{
//	//int a = 100;;
//	//printf("%d\n", a);
//	printf("%d\n", MAX);
//	return 0;
//}

//#define MAX 1000
//#define reg register           //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)     //用更形象的符号来替换一种实现
//#define CASE break;case        //在写case语句的时候自动把 break写上。
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//                          date:%s\ttime:%s\n", \
//						  __FILE__, __LINE__, \
//						  __DATE__, __TIME__)

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	FILE*pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	for (i = 0; i<10; i++)
//	{
//		fprintf(pf, "file:%s line:%d date:%s time:%s: %d\n", __FILE__, __LINE__,
//			__DATE__, __TIME__, arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//__FILE__    //进行编译的源文件
//__LINE__    //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义
