#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>


//int main()
//
//{
//
//	int arr[10] = { 6, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//绝大部分情况下：数组名是首元素的地址
//
//	//有2个例外：
//
//	//sizeof(数组名) - 数组名是表示整个数组，sizeof(数组名)计算的是整个数组的大小
//
//	//&数组名  - 数组名表示整个数组，&数组名 取出的是 整个数组的地址
//
//
//
//	printf("%p\n", arr);
//
//	printf("%d\n", *arr);
//
//
//
//	printf("%p\n", &arr[0]); 
//
//
//
//	return 0;
//
//}

//void bubble_sort(int arr[], int sz)
//
//{
//
//	int i = 0;
//
//	//冒泡排序的趟数
//
//	for (i = 0; i < sz - 1; i++)
//
//	{
//
//		//一趟冒泡排序
//
//		int j = 0;
//
//		for (j = 0; j < sz - 1 - i; j++)
//
//		{
//
//			if (arr[j] > arr[j + 1])
//
//			{
//
//				int tmp = arr[j];
//
//				arr[j] = arr[j + 1];
//
//				arr[j + 1] = tmp;
//
//			}
//
//		}
//
//	}
//
//}
//
//
//
//void print_arr(int arr[], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//	printf("\n");
//
//}
//
//
//
//int main()
//
//{
//
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//
//	//排序-排成升序
//
//	//arr是数字
//
//	//数字传参的时候，数组名会发生降级
//
//	//数据名降级变成了数组首元素的地址
//
//	//数组传参实际上传的是数组首元素的地址
//
//	print_arr(arr, sz);
//
//
//
//	bubble_sort(arr, sz);//冒泡排序的方式
//
//
//
//	print_arr(arr, sz);
//
//	return 0;
//
//}


//void bubble_sort(int arr[])
//
//{
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	//冒泡排序的趟数
//
//	for (i = 0; i < sz - 1; i++)
//
//	{
//
//		//一趟冒泡排序
//
//		int j = 0;
//
//		for (j = 0; j < sz-1-i; j++)
//
//		{
//
//			if (arr[j] > arr[j + 1])
//
//			{
//
//				int tmp = arr[j];
//
//				arr[j] = arr[j + 1];
//
//				arr[j + 1] = tmp;
//
//			}
//
//		}
//
//	}
//
//}
//
//
//
//
//int main()
//
//{
//	int i;
//
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//
//	
//
//
//
//	//排序-排成升序
//
//	//arr是数字
//
//	//数字传参的时候，数组名会发生降级
//
//	//数据名降级变成了数组首元素的地址
//
//	//数组传参实际上传的是数组首元素的地址
//
//
//
//
//	bubble_sort(arr);//冒泡排序的方式
//
//
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//
//}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;
}

//int main()
//
//{
//
//	int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//
//	int i = 0;//行数
//
//	int j = 0;//列数
//
//	for (i = 0; i < 3; i++)
//
//	{
//
//		for (j = 0; j < 4; j++)
//
//		{
//
//			printf("&arr[%d][%d] = %p\n", i, j, &arr1[i][j]);
//
//		}
//
//	}
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
//	//int arr1[3][4] = {1,2,3,4,5};
//
//	//二维数字，及时你给他初始化了，行数可以省略，但是列数是不能省略的
//
//	int arr1[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//
//	int i = 0;//行数
//
//	int j = 0;//列数
//
//	for (i = 0; i < 3; i++)
//
//	{
//
//		for (j = 0; j < 4; j++)
//
//		{
//
//			printf("%d ", arr1[i][j]);
//
//		}
//
//		printf("\n");
//
//	}
//
//
//
//	//double arr2[3][5];
//
//
//
//	return 0;
//
//}

//int main()
//{
//	int arr1[3][4] = { 1, 2, 3, 4 ,5};
//	int arr2[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	int arr3[][4] = { { 2, 3 }, { 3, 4 }, {5} };
//	return 0;
//}

//int main()
//
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	//0 1 2 3 4 ...
//
//	int i = 0;
//
//	//计算一下数组的元素个数
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%p\n", &arr[i]);
//
//	}
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9};
//
//	//0 1 2 3 4 ...
//
//	int i = 0;
//
//	//计算一下数组的元素个数
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//	return 0;
//
//}


//int main()
//{
//	int arr1[10] = { 1, 2, 3 };
//	int arr2[] = { 1, 2, 3, 4 };
//	int arr3[5] = { 1, 2, 3, 4, 5 };
//	char arr4[3] = { 'a', 98, 'c' };
//	char arr5[] = { 'a', 'b', 'c' };
//	char arr6[] = "abcdef";
//		char ch1[] = { 'a', 'b', 'c', 'd' };
//
//		char ch2[] = "abcd";
//
//		printf("%d\n", sizeof(ch1));//
//
//		printf("%d\n", sizeof(ch2));//
//
//		printf("%d\n", strlen(ch1));//
//
//		printf("%d\n", strlen(ch2));//
//	return 0;
//}