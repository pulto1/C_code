#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Pow(int n, int k)

{

	if (k == 0)

		return 1.0;

	else if (k > 0)

		return (double)n*Pow(n, k - 1);

	else

		return 1.0 / (Pow(n, -k));

}

int main()

{

	int n = 0;

	int k = 0;

	scanf("%d%d", &n, &k);

	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;

}


//int DigitSum(int n)
//
//{
//
//	if (n > 9)
//
//	{
//
//		return DigitSum(n / 10) + n % 10;
//
//	}
//
//	else
//
//	{
//
//		return n;
//
//	}
//
//}
//
//int main()
//
//{
//
//	//DigitSum(1234)
//
//	//DigitSum(123)+1234%10
//
//	//DigitSum(12) 123%10 + 1234%10
//
//	//DigitSum(1) + 12%10 + 123%10 + 1234%10
//
//	//1+2+3+4
//
//	int n = 0;
//
//	scanf("%d", &n);
//
//	int ret = DigitSum(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//
//}


//void reverse_string(char arr[])
//
//{
//
//	int left = 0;
//
//	int right = strlen(arr)-1;
//
//
//
//	while (left<right)
//
//	{
//
//		char tmp = arr[left];
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
//int my_strlen(char* str)
//
//{
//
//	int count = 0;
//
//	while (*str != '\0')
//
//	{
//
//		count++;
//
//		str++;
//
//	}
//
//	return count;
//
//}



//void reverse_string(char arr[])
//
//{
//
//	char tmp = arr[0];
//
//	int len = my_strlen(arr);
//
//	arr[0] = arr[len - 1];
//
//	arr[len - 1] = '\0';
//
//	//中间字符串的逆序
//
//	if (strlen(arr+1)>1)
//
//		reverse_string(arr+1);
//
//	arr[len - 1] = tmp;
//
//}





//int main()
//
//{
//
//	char arr[] = "abcdefg";
//
//	//逆序-逆置-arr
//
//	//fedcba
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//
//}

//void print_table(int n)
//
//{
//
//	int i = 0;
//
//	for (i = 1; i <= n; i++)
//
//	{
//
//		int j = 0;
//
//		//打印一行-多少列
//
//		for (j = 1; j <= i; j++)
//
//		{
//
//			//打印一项
//
//			printf("%2d*%2d=%3d ", i, j, i*j);
//
//		}
//
//		printf("\n");
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
//	int n = 0;
//
//	scanf("%d", &n);
//
//	print_table(n);
//
//	return 0;
//
//}

//void test(int arr[])
//
//{
//
//	int a = 10;
//
//	int b = 20;
//
//	arr[0] = a;
//
//	arr[1] = b;
//
//}
//
//
//
//int main()
//
//{
//
//	int arr[2] = {0};
//
//	test(arr);
//
//	printf("%d %d\n", arr[0], arr[1]);
//
//	return 0;
//
//}



//int main()
//
//{
//
//	int arr[10] = { 0 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//
//	{
//
//		scanf("%d", &arr[i]);
//
//	}
//
//	//找出这10个数字中最大值
//
//	int max = arr[0];
//
//	for (i = 1; i < sz; i++)
//
//	{
//
//		if (arr[i]>max)
//
//		{
//
//			max = arr[i];
//
//		}
//
//	}
//
//
//
//	printf("max = %d\n", max);
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
//	int i = 0;
//
//	double sum = 0.0;
//
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//
//	{
//
//		sum += flag * 1.0 / i;
//
//		flag = -flag;
//
//	}
//
//
//
//	printf("sum = %lf\n", sum);
//
//
//
//	return 0;
//
//}