#include <stdio.h>
int main()
{
	int max(int x,int y);  //对被调用函数max的声明
	int a,b,c;  //定义变量a,b,c
	scanf("%d,%d",&a,&b);  //输出变量a,b,c
	c=max(a,b);  //调用max函数，将得到的值赋给c
	printf("max=%d\n",c);  //输出c的值
	return 0;  //返回主函数值为0
}
int max(int x,int y)  //定义max函数，函数为整型，参数形式x,y为整型
{
	int z;  //max函数中的声明部分，定义本函数中用到的变量z为整型
	if(x>y)z=x;  //若x>y成立，将x的值赋给变量z
	else z=y;  //否则（即x>y不成立），将y的值赋给变量z
	return(z);  //将z作为max函数值，返回到调用max函数的位置
}