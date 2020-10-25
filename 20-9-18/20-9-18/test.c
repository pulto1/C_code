#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>

struct Stu

{

	char name[20];//20

	int age;//4

};



void print1(struct Stu stu)

{

	printf("%s %d\n", stu.name, stu.age);

}



void print2(struct Stu* ps)

{

	//printf("%s %d\n", (*ps).name, (*ps).age);

	printf("%s %d\n", ps->name, ps->age);

}



int main()

{

	struct Stu s = {"张三", 20};

	//传值调用

	print1(s);



	//传址调用

	print2(&s);



	return 0;

}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
//void print(struct stu *ps)
//{
//	printf("name = %s   age = %d\n", (*ps).name, (*ps).age);
//	//使用结构体指针访问指向对象成员
//	printf("name = %s   age = %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct stu s = { "zhangsan", 20 };
//	print(&s); //结构体地址传参
//	return 0;
//}

//struct B
//
//{
//
//	int a;
//
//	char c;
//
//};
//
//
//
//struct S
//
//{
//
//	int a;//标量
//
//	char arr[20];//数组
//
//	int*p;//指针
//
//	struct B sb;//结构体
//
//};
//
//
//
//int main()
//
//{
//
//	int a = 0;//初始化
//
//
//
//	struct B b = {20, 'w'};
//
//	struct S s = { 100, "hehe", NULL, {33, 'Q'} };
//
//	printf("%d %s %d %c\n", s.a, s.arr, s.sb.a, s.sb.c);
//
//
//
//	return 0;
//
//}

////书-声明了一个结构体类型
//
//
//struct Book
//
//{
//
//	char name[20];//书名
//
//	short price;  //定价
//
//}b4,b5,b6;//全局变量
//
//
//
//typedef struct Book
//
//{
//
//	char name[20];//书名
//
//	short price;  //定价
//
//}Book;
//
//
//
//int main()
//
//{
//
//	//利用结构体类型创建结构体变量-局部变量
//
//	struct Book b1;//创建一本书
//
//	struct Book b2;//创建一本书
//
//	struct Book b3;//创建一本书
//
//	Book b4;
//
//	Book b5;
//
//
//
//	//字符串拷贝
//
//	//把“C语言”拷贝到name数组中
//
//
//
//	strcpy(b1.name, "C语言");
//
//	b1.price = 55;
//
//	
//
//	printf("%s\n", b1.name);
//
//	printf("%d\n", b1.price);
//
//
//
//	return 0;
//
//}