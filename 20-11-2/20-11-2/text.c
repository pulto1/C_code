#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>	
#include <ctype.h>

enum State
{
	VALID,
	INVALID
}state = VALID;

int my_atoi(const char* str)
{
	int flag = 0;
	state = INVALID;
	//空指针
	if (str == NULL)
		return 0;
	//空白字符的处理
	while (isspace(*str))
	{
		str++;
	}
	//+-
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str) == 0)
		{
			break;
		}
		else
		{
			ret = ret * 10 + flag*(*str - '0');

			str++;
		}
	}
	return ret;
}


int main()
{
	char*p = "    -123";
	int ret = my_atoi(p);
	printf("%d\n", ret);

	return 0;
}

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %2x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}

//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}*Env_Alarm_Record;
//
//
//int main()
//{
//	struct _Record_Struct *pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sizeof(*pointer) * MAX_SIZE);
//	return 0;
//}

//struct S2
//{
//	int num;
//	char* arr;
//};
//
//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	ps->num = 100;
//	ps->arr = (char*)malloc(6*sizeof(char));
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		ps->arr[i] = 'a' + i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//增容
//	char* ptr = realloc(ps->arr, 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//struct S
//{
//	int num;//4
//	char arr[];//柔性数组成员
//};

//int main()
//{
//	//printf("%d\n", sizeof(struct S));//?
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 6);
//	p->num = 100;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		p->arr[i] = 'a'+i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//	/*增加*/
//	struct S* ptr = realloc(p, 14);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
