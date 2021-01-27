#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i<10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	extern void print(char *str);
	extern int g_val;
	printf("%d\n", g_val);
	print("hello bit.\n");
	return 0;
}

int g_val = 2016;
void print(const char *str)
{
	printf("%s\n", str);
}

//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
//	double b = 0.0;
//	size_t ret_code = 0;
//	FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof(*a), SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	fp = fopen("test.bin", "rb");
//	// 读 double 的数组
//	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
//	{
//		printf("%lf\n", b);
//	}
//	if (feof(fp))
//		printf("End of file reached successfully\n");
//	else if (ferror(fp))
//	{
//		perror("error when reading");
//	}
//	fclose(fp);
//	fp = NULL;
//}

//int main()
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(fp))
//		puts("\nI/O error when reading");
//	else if (feof(fp))
//		puts("\nEnd of file reached successfully");
//	fclose(fp);
//}

//int main()
//{
//	int n;
//	FILE * pFile;
//	char buffer[27];
//	pFile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pFile);
//	rewind(pFile);
//	fread(buffer, 1, 26, pFile);
//	fclose(pFile);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	fputs("ABCDEF", pf);
//
//	fseek(pf, 4, SEEK_SET);
//
//	fputc('W', pf);
//	int ret = ftell(pf);
//	printf("ret = %d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("test.dat", "rb");
//	if (pf == NULL)
//	{
//		perror("open file for reading");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct Stu), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct Stu s = { "张三", 20, 99.2f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct Stu), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
