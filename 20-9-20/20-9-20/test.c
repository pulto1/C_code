#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



////题目名称：
//
////打印整数二进制的奇数位和偶数位
//
////题目内容：
//
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//
//
//int main()
//
//{
//
//	int m = 0;
//
//	scanf("%d", &m);
//
//
//
//	//11
//
//	//00000000000000000000000000001011
//
//	//
//
//	int i = 0;
//
//	//偶数位
//
//	for (i = 31; i >= 1; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	printf("\n");
//
//	//奇数位
//
//	for (i = 30; i >= 0; i -= 2)
//
//	{
//
//		printf("%d ", (m >> i) & 1);
//
//	}
//
//	return 0;
//
//}




//求两个数二进制中不同位的个数

//题目内容：

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

//输入例子 :

//1999 2299

//输出例子 : 7

//

//11

//00000000000000000000000000001010

//00000000000000000000000000000001

//00000000000000000000000000000001

//int get_diff_bit(int m, int n)
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//
//	{
//
//		if (((m >> i) & 1) != ((n >> i) & 1))
//
//		{
//
//			count++;
//
//		}
//
//	}
//
//	return count;
//
//}


//
//#include <stdio.h>
//
//
//
//int get_diff_bit(int m, int n)
//
//{
//
//	int i = 0;
//
//	int count = 0;
//
//	int tmp = m^n;//统计tmp中有几个1就可以了
//
//	while (tmp)
//
//	{
//
//		tmp = tmp&(tmp - 1);
//
//		count++;
//
//	}
//
//	return count;
//
//}
//
//
//
//
//
//int main()
//
//{
//
//	int m = 0;
//
//	int n = 0;
//
//
//
//	//输入
//
//	scanf("%d%d", &m, &n);
//
//	//求出m和n的二进制的每一位，然后比较计数
//
//	int count = get_diff_bit(m, n);
//
//
//
//	//输出
//
//	printf("%d\n", count);
//
//	return 0;
//
//}


//void SwapArr(int arr1[], int arr2[], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		int tmp = arr1[i];
//
//		arr1[i] = arr2[i];
//
//		arr2[i] = tmp;
//
//	}
//
//}
//
//int main()
//
//{
//
//	int arr1[] = { 1, 3, 5, 7, 9 };
//
//	int arr2[] = { 2, 4, 6, 8, 0 };
//
//	int i = 0;
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	SwapArr(arr1, arr2, sz);
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr1[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		printf("%d ", arr2[i]);
//
//	}
//
//	printf("\n");
//
//
//
//	return 0;
//
//}

     

//void Init(int arr[10], int sz)
//
//{
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		arr[i] = 0;
//
//	}
//
//}
//
//
//
//void Print(int arr[], int sz)
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
//void Reverse(int arr[], int sz)
//
//{
//
//	int left = 0;
//
//	int right = sz-1;
//
//	while (left < right)
//
//	{
//
//		int tmp = arr[left];
//
//		arr[left] = arr[right];
//
//		arr[right] = tmp;
//
//		left++;
//
//		right--;
//
//	}
//
//}
//
//
//
//int main()
//
//{
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//
//	//Init(arr, sz);//初始化数组为全0
//
//	Reverse(arr, sz);
//
//	Print(arr, sz);
//
//
//
//	return 0;
//
//}