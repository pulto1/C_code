#include<stdio.h>
int main()
{
	int i,j=0;
	char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'};
	for(i=0,j=0;i<15;i++)
	{
		if(c[i]=='a')	
			j++;
	}
	printf("%d\n",j);
	return 0;
}
