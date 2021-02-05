#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//数空格
int i = 0;
int spcount = 0;
for (i = 0; i < length; i++)
{
	if (str[i] == ' ')
	{
		spcount++;
	}
}

//从后往前处理字符串
int newlen = length + spcount * 2 - 1;
for (i = length - 1; i >= 0; i--)
{
	if (str[i] == ' ')
	{
		str[newlen--] = '0';
		str[newlen--] = '2';
		str[newlen--] = '%';
	}
	else
	{
		str[newlen--] = str[i];
	}
}

//int main()
//{
//	int n = 0;
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		if (f2 == n)
//		{
//			printf("%d\n", 0);
//			break;
//		}
//		else if (f2 > n)
//		{
//			if (abs(f1 - n) > abs(f2 - n))
//				printf("%d\n", abs(f2 - n));
//			else
//				printf("%d\n", abs(f1 - n));
//			break;
//		}
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//
//	return 0;
//}


//void main()
//{
//	int a = -3;
//	unsigned int b = 0xFFFFFFFF;//		
//	long c = b;
//	printf("%ld\n", c);
//}

//#define BITCHANGE(n) ((((n) & 0x55555555) << 1) + (((n) & 0xaaaaaaaa) >> 1))
//int main()
//{
//	int a = 10;
//	int b = BITCHANGE(a);
//	printf("%d\n", b);
//
//	//00000000000000000000000000001010
//	//00000000000000000000000000000101
//	//10101010101010101010101010101010
//	//0xaaaaaaaa
//
//	//01010101010101010101010101010101
//	//0x55555555
//	//00000000000000000000000000000101
//
//}
