#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()

{

	int i = 1;

	do

	{

		if (i == 5)

			continue;



		printf("%d ", i);

		i++;

	} while (i <= 10);

	return 0;

}

//int main()
//
//{
//
//	int i = 1;
//
//	do
//
//	{
//
//		if (i == 5)
//
//			break;
//
//
//
//		printf("%d ", i);
//
//		i++;
//
//	}
//
//	while (i<=10);
//
//	return 0;
//
//}


//#include <stdio.h> 
//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}
//int main()
//
//{
//
//	//死循环代码
//
//	//为什么死循环了？
//
//	//因为当for循环的判断部分省略掉的时候，默认表示恒为真
//
//	/*for ( ; ; )
//
//	{
//
//		printf("hehe\n");
//
//	}*/
//
//
//	//建议不要轻易省略
//
//	//1
//
//	//int i = 0;
//
//	//int j = 0;
//
//	//int count = 1;
//
//	//for (i = 0; i < 10; i++)
//
//	//{
//
//	//	for (j = 0; j < 10; j++)
//
//	//	{
//
//	//		printf("hehe:%d\n", count);
//
//	//		count++;
//
//	//	}
//
//	//}
//
//
//
//	//2
//
//	int i = 0;
//
//	int j = 0;
//
//	int count = 1;
//
//	for (; i < 10; i++)
//
//	{
//
//		for (; j < 10; j++)
//
//		{
//
//			printf("hehe:%d\n", count);
//
//			count++;
//
//		}
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
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	//0-9
//
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
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
//
//{
//
//	int i = 0;//初始化部分
//
//
//
//	//while (i<10)//判断部分
//
//	//{
//
//	//	printf("%d ", i);
//
//	//	i++; //调整部分
//
//	//}
//
//
//
//	//for (i = 0; i < 10; i++)
//
//	//{
//
//	//	printf("%d ", i);
//
//	//	i += 2;
//
//	//}
//
//
//
//
//
//	/*for (i = 0; i < 10; i++)
//
//	{
//
//		if (i == 5)
//
//			break;
//
//
//
//		printf("%d ", i);
//
//	}*/
//
//
//
//	for (i = 0; i < 10; i++)
//
//	{
//
//		if (i == 5)
//
//			continue;
//
//
//
//		printf("%d ", i);
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
//	int ch = 0; 
//
//	while ((ch = getchar()) != EOF)
//
//	{
//
//		if (ch < '0' || ch>'9')
//
//			continue;
//
//
//
//		putchar(ch);
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
//	int ch = 0;
//
//	//EOF  ===>  -1
//
//
//
//	while ((ch = getchar()) != EOF)
//
//	{
//
//		putchar(ch);
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
//	int ch = getchar();
//
//	putchar(ch);
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
//	int i = 1;
//
//	while (i <= 10)
//
//	{
//
//		if (i == 5)
//
//		{
//
//			break;
//
//		}
//
//		printf("%d ", i);
//
//		i++;
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
//	int i = 1;
//
//	while (i<=10)
//
//	{
//
//		if (i == 5)
//
//		{
//
//			continue;
//
//		}
//
//		printf("%d ", i);
//
//		i++;
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
//	//while循环
//
//
//
//	while (1)
//
//	{
//
//		printf("hehe\n");
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
//	int n = 1;
//
//	int m = 2;
//
//	switch (n)
//
//	{
//
//	case 1:m++;
//
//	case 2:n++;
//
//	case 3:
//
//		switch (n)
//
//		{//switch允许嵌套使用
//
//		case 1:n++;
//
//		case 2:m++;n++;
//
//			break;
//
//		}
//
//	case 4:
//
//		m++;
//
//		break;
//
//	default:
//
//		break;
//
//	}
//
//	printf("m = %d, n = %d\n", m, n);
//
//	//m = ? n = ?
//
//
//
//	return 0;
//
//}

//1-5 工作日

//6-7 休息日

//

//int main()
//
//{
//
//	int day = 0;
//
//	scanf("%d", &day);
//
//
//
//	switch (day)
//
//	{
//
//	
//	default:
//
//		printf("选择错误\n");
//
//		break;
//	case 1:
//
//	case 2:
//
//	case 3:
//
//	case 4:
//
//	case 5:
//
//		printf("工作日\n");
//
//		break;
//
//	case 6:
//
//	case 7:
//
//		printf("休息日\n");
//
//		break;
//
//	
//
//	}
//
//	//
//
//	return 0;
//
//}

//int main()
//
//{
//
//	int day = 0;
//
//	scanf("%d", &day);
//
//
//
//	switch (day)
//
//	{
//
//	case 1:
//
//		printf("星期1\n");
//
//		break;
//
//	case 2:
//
//		printf("星期2\n");
//
//		break;
//
//	case 3:
//
//		printf("星期3\n");
//
//		break;
//
//	case 4:
//
//		printf("星期4\n");
//
//		break;
//
//	case 5:
//
//		printf("星期5\n");
//
//		break;
//
//	case 6:
//
//		printf("星期6\n");
//
//		break;
//
//	case 7:
//
//		printf("星期天\n");
//
//		break;
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
//	int day = 0;
//
//	scanf("%d", &day);
//
//	if (1 == day)
//
//	{
//
//		printf("星期1\n");
//
//	}
//
//	else if (2 == day)
//
//	{
//
//		printf("星期2\n");
//
//	}
//
//	else if (3 == day)
//
//	{
//
//		printf("星期3\n");
//
//	}
//
//	else if (4 == day)
//
//	{
//
//		printf("星期4\n");
//
//	}
//
//	return 0;
//
//}