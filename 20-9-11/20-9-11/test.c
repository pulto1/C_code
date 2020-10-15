#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include <stdio.h>

void  test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)
	test1(arr);
	test2(ch);
	return 0;
}


//int main()
//
//{
//
//	int a = 10;
//
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));//计算数组的总大小，单位是字节
//
//	printf("%d\n", sizeof(int[10]));
//
//
//
//	//printf("%d\n", sizeof(a));
//
//	//printf("%d\n", sizeof(int));
//
//
//
//	return 0;
//
//}

//int main()
//{
//	int a = 10;//4个字节的空间
//	int* pa = &a;//指针变量
//	*pa = 20;//* 解引用操作符
//	printf("a = %d\n", a);
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	a = -a;
//	printf("%d \n", a);
//
//	return 0;
//
//}

//int main()
//
//{
//
//
//
//	int a = 10;
//
//	printf("%d\n", a);//10-非零-真
//
//	printf("%d\n", !a);//0
//
//	return 0;
//
//}

////int count_one(int n)
////
////{
////
////	int count = 0;
////
////	while (n)
////
////	{
////
////		if (n % 2 == 1)
////
////		{
////
////			count++;
////
////		}
////
////		n = n / 2;
////
////	}
////
////	return count;
////
////}
//
////int count_one(int n)
////
////{
////
////	int count = 0;
////
////	int i = 0;
////
////	for (i = 0; i < 32; i++)
////
////	{
////
////		if ( ( (n >> i) & 1) == 1 )
////
////		{
////
////			count++;
////
////		}
////
////	}
////	return count;
////}
//
////n=7
//
////n = n&(n-1)
//
////111-n
//
////110
//
////110-n
//
////101
//
////100-n
//
////011
//
////000-n
//
////
//
//int count_one(int n)
//
//{
//
//	int count = 0;
//
//	while (n)
//
//	{
//
//		n = n&(n - 1);
//
//		count++;
//
//	}
//
//	return count;
//
//}
//
//int main()
//
//{
//
//	int a = -1;
//
//	//11111111111111111111111111111111
//
//	//00000000000000000000000000000001
//
//	//00000000000000000000000000000001
//
//	//
//
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//
//{
//
//	int a = 3;
//
//	int b = 5;
//
//	printf("a=%d b=%d\n", a, b);
//
//
//
//	a = a^b;
//
//	b = a^b;
//
//	a = a^b;
//
//
//
//	printf("a=%d b=%d\n", a, b);
//
//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int a = 3;
//
//	int b = 5;
//
//	int c = a^b;//&-按（2进制）位与
//
//	//011
//
//	//101
//
//	//001
//
//	//
//
//	printf("c = %d\n", c);
//
//
//
//	return 0;
//
//}


//int main()
//
//{
//
//	int a = 7;
//
//	int b = a >> -1;
//
//	printf("b = %d\n", b);
//
//	//a是一个int的变量
//
//	//4个字节
//
//	//4*8bit位
//
//	//32bit
//
//	//00000000000000000000000000000111
//
//	//
//
//	//a >> 1;
//
//	//a << 1;
//
//	//左移操作符-移动的是二进制位
//
//	//111;
//
//	return 0;
//
//}


//int main()
//
//{
//
//
//	
//	double a = 6.0 % 2.0;
//
//	printf("a = %lf\n", a);
//
//
//
//	return 0;
//
//}

