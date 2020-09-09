#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int Add(int x, int y)

{

	int z = x + y;

	return z;

}



int main()

{

	//函数 - 

	//f(x, y) = x+y;

	int num1 = 0;

	int num2 = 0;

	scanf("%d%d", &num1, &num2);

	//int sum = num1 + num2;

	//函数的方式来解决

	//希望用一个加法的函数

	//Add

	int sum = Add(num1, num2);



	printf("%d\n", sum);

	return 0;

}
//
//int main()
//
//{
//
//	int line = 0;
//
//	printf("加入比特\n");
//
//	while (line < 20000)
//
//	{ 
//
//		printf("我敲代码:%d\n", line);
//
//		line++;
//
//	}
//
//	if (line >= 20000)
//
//	{
//
//		printf("好offer\n");
//
//	}
//
//	return 0;
//
//}
//int main()
//
//{
//
//	int input = 0;
//
//	printf("加入比特\n");
//
//	printf("你要好好学习吗(1/0)？\n");
//
//	scanf("%d", &input);
//
//	if (input == 1)
//
//	{
//
//		printf("好offer\n");
//
//	}
//
//	else
//
//	{
//
//		printf("卖红薯\n");
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
//	printf("%d\n", strlen("abcdef"));
//
//	// \32被解析成一个转义字符
//
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//
//	return 0;
//
//}
//int main()
//
//{
//
//	printf("c:\code\test.c");
//
//	
//
//
//
//	return 0;
//
//}

////strlen - string length - 字符串长度
//
//int main()
//
//{
//
//	char arr1[] = "bit";
//
//	char arr2[] = { 'b', 'i', 't' };
//
//	printf("%d\n", sizeof(arr1));
//
//	printf("%d\n", sizeof(arr2));
//
//
//
//	//char arr1[] = "bit";
//
//	//char arr2[] = { 'b', 'i', 't' ,'\0'};
//
//	//printf("%d\n", strlen(arr1));
//
//	//printf("%d\n", strlen(arr2));//?
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
//	char arr1[] = "abcdef";
//
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f','\0'};
//
//	//%s 是打印字符串
//
//
//
//	printf("%s\n", arr1);
//
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//
//}

////创建一种枚举类型
//enum Sex
//{
//	//枚举类型Sex的三个可能取值 - 枚举常量
//
//	MALE,
//
//	FEMALE,
//
//	SECRET
//};
//int main()
//{
////	enum Sex sex = FEMALE;
//
//	MALE = 2;//err
//
//	printf("%d\n", MALE);
//
//	printf("%d\n", FEMALE);
//
//	printf("%d\n", SECRET);
//	return 0;
//}

//
//#define NUM 100
//
//
//
//int main()
//
//{
//
//	//NUM 是 #define定义的常量
//
//
//
//	//NUM = 200;
//
//	printf("打印结果是：%d\n", NUM);
//
//
//
//	return 0;
//
//}


//{
//
//	
//
//	////2. const修饰的常变量
//
//	//const int num = 10;
//
//	//printf("num = %d\n", num);
//
//	//num = 20;
//
//	//printf("num = %d\n", num);
//
//
//
//	const int n = 10;//常变量 - 具有常熟性的变量
//
//	int arr[n] = {1,2,3};
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
//	{
//
//		int a = 10;
//
//		//printf("a = %d\n", a);
//
//	}
//
//	printf("a = %d\n", a);
//
//
//
//	return 0;

//int main()
//
//{
//
//	int num1 = 0;
//
//	int num2 = 0;
//
//	printf("请输入两个整数:");
//
//
//
//	scanf("%d%d", &num1, &num2);
//
//	int sum = num1 + num2;
//
//
//
//	printf("%d\n", sum);
//
//	return 0;
//
//}

////全局变量 - 放在{}外的是全局变量
//
//int a = 100;
//
//
//
//int main()
//
//{
//
//	//局部变量a - 放在{}里边的就是局部变量
//
//	int a = 10;
//
//	printf("%d\n", a);//当全局变量和局部变量名字相同时，局部优先
//
//
//
//	return 0;
//
//}
