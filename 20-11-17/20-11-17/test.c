#define _CRT_SECURE_NO_WARNINGS

#include <stddef.h>

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//满足条件就是三角形
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b  && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}

//int main()
//{
//	int n = 0;
//	int arr[5000] = { 0 };
//	//输入数据
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//去重
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			//如果相等，把后续元素往前移动
//			if (arr[i] == arr[j])
//			{
//				int k = 0;
//				for (k = j; k < n - 1; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//			}
//			n--;
//			j--;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算ret的哪一位为1
//	//000000000000000000000000000000011
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			break;
//	}
//	pos = i;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = ret ^ num1;
//	printf("%d %d\n", num1, num2);
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	double d;
//};
//
//#define OFFSETOF(sn, mn)   (size_t)&(((sn*)0)->mn)
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}

//#ifndef __TEST_H__
//#define __TEST_H__
////头文件的内容
//#endif //__TEST_H__ 

//#if defined(OS_UNIX)
//	#ifdef OPTION1
//	unix_version_option1();
//	#endif
//	#ifdef OPTION2
//	unix_version_option2();
//	#endif
//#elif defined(OS_MSDOS)
//	#ifdef OPTION2
//	msdos_version_option2();
//	#endif
//#endif

//#define ZHANGSAN 0
//int main()
//{
//#if defined(ZHANGSAN)
//	printf("张三\n");
//#endif
//
//#if !defined(ZHANGSAN)
//	printf("没张三\n");
//#endif
//
//#ifdef ZHANGSAN
//	printf("zhangsan\n");
//#endif
//
//#ifndef ZHANGSAN
//	printf("meizhangsan\n");
//#endif
//
//	return 0;
//}

//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol 

//int main()
//{
//#if 1==0
//	printf("1\n");
//#elif 2==2
//	printf("2\n");
////#else
////	printf("hehe\n");
//#endif
//
//	return 0;
//}

//#if 常量表达式
////...
//#elif 常量表达式
////...
//#else
////...
//#endif

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#if 1 == 0
//		printf("%d\n", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//#define __PRINT__
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __PRINT__
//		printf("%d\n", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//	int array[ARRAY_SIZE];
//	int i = 0;
//	for (i = 0; i< ARRAY_SIZE; i++)
//	{
//		array[i] = i;
//	}
//	for (i = 0; i< ARRAY_SIZE; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//
//	return 0;
//}

//#define MALLOC(num, type)    (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//malloc(10*sizeof(int));
//	//Malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	return 0;
//}

//#define MAX(X,Y)  ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 0.1;
//	float d = 2.0;
//	//宏
//	int max = MAX(a, b);
//	printf("%d\n", max);
//	//函数
//	max = Max(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}
