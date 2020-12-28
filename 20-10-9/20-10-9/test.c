#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int my_strlen(const char* str)
{
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}



int main()
{
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	//int(*p)[10] = &arr;//取出数组的地址 p就是数组指针

	////函数指针的问题
	////是一个指向函数的指针 - 存放函数的地址
	/*int (*pf)(int, int) = &Add;*/
	int(*pf)(int, int) = Add;
	int sum = (*pf)(2, 3);
	printf("%d\n", sum);
	sum = pf(2, 3);
	printf("%d\n", sum);
	sum = Add(2, 3);
	printf("%d\n", sum);


	//int (*ps)(const char*) = &my_strlen;

	/*printf("%p\n", &Add);
	printf("%p\n", Add);*/
	//函数名是函数的地址
	//&函数名还是函数的地址

	return 0;
}

//void test(int** p)
//{}
//
//int main()
//{
//	int* p1;
//	int **ptr;
//	int* arr[5];//
//	test(ptr);
//	test(&p1);
//	test(arr);
//	
//	return 0;
//}

//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//void test1(int* p)
//{
//}
//
//void test2(char* p)
//{}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	char arr2[5];//
//	test2(arr2);
//
//	test2(&ch);
//	test2(pc);
//
//	int a = 10;
//	int* ptr = &a;
//	int arr[10];
//	test1(&a);//ok
//	test1(ptr);//ok
//	test1(arr);//ok
//
//	return 0;
//}

//#include <stdio.h>
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int *arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int **arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}

//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int *arr)//ok?
//{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	printf("%d ", (*p)[8]);
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)+i);
//	}*/
//	return 0;
//}

////void print1(int arr[3][5], int x, int y)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < x; i++)
////	{
////		for (j = 0; j < y; j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////}
//
////数组指针
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(p+i))[j]);
//		
//		}
//		printf("\n");
//	}
//}

//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

//
//
//void print3( int(*p)[3][5] )
//{
//
//}
//
////数组指针的使用，一遍常见于二维素组
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	//写一个函数打印arr数组的内容
//	//print1(arr, 3, 5);//这里的arr也是数组名，表示的依然是首元素的地址
//	print2(arr, 3, 5);
//	/*print3(&arr);*/
//	return 0;
//}

//void print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		/*printf("%d ", arr[i]);*/
//		printf("%d ", *(arr + i));//2
//	}
//}
//
////void print2(int* arr, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		//printf("%d ", arr[i]);//1 - 编译器自己也会把arr[i]转换成*(arr+i)
////		printf("%d ", *(arr + i));//2
////	}
////}
//
//int main()
//{
//	int arr2[] = { 1, 2, 3, 4, 5, 6 };
//	print1(arr2, 6);
//	/*print2(arr2, 6);*/
//	return 0;
//}
