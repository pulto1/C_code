 #include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "malloc.h"
struct WORK
{
	char    Number[20];                           //身份证号
	char    Name[32];                         //姓名
	int     Old;                              //出生日期
	char    Edu[20];                          //学历
	float  Salary;                            //工资
	char    Address[64];                      //籍贯
	long     Time;                             //工作年限
	char    Lesson[20];                       //所带课程
	struct  WORK *next;
};
struct WORK* worker=NULL;                           
void saveWorToFile();                          //保存职工信息到文件
void addworker(struct WORK *wor);              //添加职工信息（链表操作）
void delWork(char* name);                      //删除职工信息（链表操作） 
void delworker();                              //删除职工信息
void add();                                    //录入职工信息
void lookthrough();                            //浏览职工信息
void query();                                  //查询职工信息
void Reviseworker();                           //修改职工信息
int menu_select();                             //菜单界面
void readWorkerput();                         //从文件中读取职工信息
int main()
{   
	char choose;
    readWorkerput();
	
    for(;;)
	{
       choose=menu_select();
	   if(choose==1)
		    add();
	   else if(choose==2)
              lookthrough();
	   else if(choose==3)
              query();
	   else if(choose==4)
               delworker();
	   else if(choose==5)
		       Reviseworker()  ;                            
	   else
	      break;
	}
	return 0;
}
int menu_select()                             //菜单函数定义
{
   char c;
   printf("===============================================================\n");
   printf("|----------------------职工信息管理系统 v1.0------------------|\n");
   printf("|                                                             |\n");
   printf("|                         1.录入信息                          |\n");
   printf("|                         2.浏览信息                          |\n");
   printf("|                         3.查询信息                          |\n");
   printf("|                         4.删除信息                          |\n");
   printf("|                         5.修改信息                          |\n");
   printf("|                         7.退出系统                          |\n");
   printf("***************************************************************\n");
   printf("                    请输入（1-7）进行操作：\n");
   do{
	    scanf("%c",&c);
   }while(c<'1'||c>'7');
   return c-48;
 
}
/****************************************************************************************************************************/
void add()                                    //1、录入职工信息函数定义
{
	struct WORK *p;
	int     tmp=1;
	char     number[20];
	char    name[32];
    char    sex[2];
	int     old;
	char    edu[20];
	float  salary;
	char    address[64];
	long     tel;
	char    lesson[20];
	struct WORK* n=(struct WORK*)malloc(sizeof(struct WORK));
	p=worker;
  
    printf("输入身份证号：");
	scanf("%s",number);
    while(p!=NULL)
	{
		if(strcmp(p->Number ,number)==0)
		{
			printf("该身份证号已存在！\n");
			tmp =2;
		}
        p=p->next;
	}	
	if(tmp==2)
		return ;
	printf("输入姓名：");  //姓名
	scanf("%s",name);
	printf("输入出生日期：");  //出生日期
	scanf("%d",&old);
	printf("输入学历：");  //学历
	scanf("%s",edu);
	printf("输入工资：");  //工资
	scanf("%f",&salary);
	printf("输入籍贯：");  //籍贯
    scanf("%s",address);
	printf("输入工作年限：");  //工作年限
	scanf("%ld",&tel);
	printf("输入所带课程：");  //所带课程
	scanf("%s", lesson);
	strcpy(n->Number,number);
    strcpy(n->Name,name);
	n->Old=old;
	strcpy(n->Edu,edu);
	n->Salary=salary;
	strcpy(n->Address,address);
	strcpy(n->Lesson, lesson);
	n->Time=tel;
    addworker(n);
	saveWorToFile();
	printf("录入成功！\n");
}
void addworker(struct WORK *wor)
{
	struct WORK *p;
	if(worker==NULL)
	{
		worker =wor;
		wor->next=NULL;
	}
	else
	{
		p = worker;
		while(p)
		{
			if(p->next==NULL)
			{
				p->next =wor;
				wor->next =NULL;
                
			}
			p= p->next;
		}
	}
}
/***************************************************************************************************************************/
void lookthrough()                              //2、浏览信息
{
	struct WORK * p;
	p=worker;
	if(p!=NULL)
	{   
		printf("身份证号           姓名 出生日期 学历 工资        籍贯 工作年限 所带课程\n");
    	while(p!=NULL)
		{
          printf("%s %s   %d %s %f %s   %ld        %s\n",p->Number,p->Name,p->Old,p->Edu,p->Salary,p->Address,p->Time,p->Lesson);
          p=p->next;
		}
	}
	else
	   printf("暂无职工信息！\n");
}
	
/***************************************************************************************************************************/
void query()                             //3、查询职工信息
{
	char num[20];
	int tmp=1;
	struct WORK * p;
	int ju;
	int nianling;
	char xueli[20];
	int judge;
	p=worker;
	printf("                   精确查找请按--1\n                   批量查找请按--2\n");
	scanf("%d",&judge);
	switch(judge)
	{
	case 1:
		printf("请输入您要查询的身份证号:\n");
		scanf("%s",num);
		while(p!=NULL)
		{
			if(strcmp(p->Number,num)==0)
			{
				tmp =3;
				break;
			}
			 p=p->next;
		}
		if(tmp==3)
		{
			printf("身份证号           姓名 出生日期 学历 工资        籍贯 工作年限 所带课程\n");
			printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
		}
		else
		  printf("身份证号不存在!\n");
		break;
    case 2:
		
		printf("                   查询同一出生日期职工信息请按------1\n                   查询同一学历职工信息请按------2\n");
		scanf("%d",&ju);
		if(ju==1)
		{   
			printf("请输入出生日期：\n");
			scanf("%d",&nianling);
			if(p!=NULL)
			{
				printf("身份证号           姓名 出生日期 学历 工资        籍贯 工作年限 所带课程\n");
         		while(p!=NULL)
				{
					if(p->Old==nianling)
					{
						printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
					}
					 p=p->next;
				}
			}
			else
                printf("暂无职工信息！");
		} 
		else if(ju==2)
		{
           printf("请输入学历：");
		   scanf("%s",xueli);
           	if(p!=NULL)
			{
         		while(p!=NULL)
				{
					if(!strcmp(p->Edu,xueli))
					{
						printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
					}
					 p=p->next;
				}
			}
			else
                printf("暂无职工信息！");
		}
	}
}
/***************************************************************************************************************************/
void delworker()                                //4、删除职工信息
{
	struct WORK * p;
	char n[20];
	int tem=1;
	char panduan[4];
	p=worker;
	printf("请输入要删除的身份证号：\n");
    scanf("%s",n);
	printf("确定删除%d？(yes/no)\n",n);
    scanf("%s",panduan);
	if(strcmp("no",panduan)==0)
	          return;
	else
	{
	   while(p!=NULL)
	   {
	     if(strcmp(p->Number,n))
		 {
			tem =2;
			break;
		 }
         p=p->next;
	   }
    }
	if(tem==2)
		delWork(p->Name);
	saveWorToFile();
}
void delWork(char *name)
{
	struct WORK *p,*pre;
	if (worker==NULL)
	{
		return;
	}
	p =pre=worker;
	while(p)
	{
		if (!strcmp(p->Name,name))
		{
			if(p==worker)
			{
					worker = worker->next;
					free(p);
					printf("删除成功！\n");
					p=NULL;
			}
			else
			{
				pre->next =p->next;
				free(p);
				printf("删除成功！\n");
				p=NULL;
 
			}
		}
		else
		{
			pre =p;
			p= p->next;
		}
	}
}
/***************************************************************************************************************************/
void Reviseworker()                               //修改职工信息
{
	char    name[32];
    char    sex[2];
	int     old;
	char    edu[20];
	float   salary;
	char    address[64];
	long    tel;
	char    lesson[20];
   struct WORK * p;
   
   char num[20];
   int a=1;
   char xueli[20];
   float money;
   int judge;
   p=worker;
   printf("选择精确修改请按1\n选择批量修改请按2\n");
   scanf("%d",&judge);
   switch(judge)
   {
   case 1:
		   printf("请输入被修改职工身份证号：\n");
		   scanf("%s",num);
		   if(p==NULL)
		   {
			   printf("暂无职工信息录入！\n");
			   return ;
		   }
		   while(p)
		   {
			   if(strcmp(p->Number,num)==0)
			   {   
				    printf("此职工原来信息如下：\n");
					printf("身份证号           姓名 出生日期 学历 工资        籍贯 工作年限 所带课程\n");
					printf("%s %s   %d %s %f %s   %ld        %s\n", p->Number, p->Name, p->Old, p->Edu, p->Salary, p->Address, p->Time, p->Lesson);
				 	printf("输入姓名：");  //姓名
					scanf("%s",name);
					printf("输入出生日期：");  //出生日期
					scanf("%d",&old);
					printf("输入学历：");  //学历
					scanf("%s",edu);
					printf("输入工资：");  //工资
					scanf("%f",&salary);
					printf("输入籍贯：");  //籍贯
					scanf("%s",address);
					printf("输入工作年限：");  //工作年限
					scanf("%ld",&tel);
					printf("输入所带课程：");  //所带课程
					scanf("%s", lesson);
					strcpy(p->Lesson, lesson);
   					strcpy(p->Name,name);
					p->Old=old;
					strcpy(p->Edu,edu);
					p->Salary=salary;
					strcpy(p->Address,address);
					p->Time=tel;
                    saveWorToFile();                              //保存修改后信息
					printf("修改成功！\n");
					a=0;
					break;
			   }
			   p=p->next;
		   }
		   if(a==1)
		   printf("没有此职工信息！\n");
		   break;
   case 2:
	 printf("根据学历批量修改职工工资\n");
     printf("请输入所要批量修改的职工学历和所加工资：\n");
	 printf("学历：");
	 scanf("%s",xueli);
	 printf("所加工资：");
	 scanf("%f",&money);
     if(p==NULL)
	 {
		 printf("暂无职工信息录入！\n");
		 return ;
	 }
	 while(p)
	 {
	   if(!strcmp(p->Edu,xueli))
	   {
           p->Salary=p->Salary+money;
	   }
	   p=p->next;
	 }
	 printf(" 修改成功！");
    saveWorToFile();
	break;
   }
}
void saveWorToFile()                //保存职工信息到文件
{
	FILE *fp;
    struct WORK*p;
	p = worker;
	if((fp=fopen("worker.txt","w"))==NULL)
	{
		printf("Can not open the file,press any key exit!");
		exit(1);
	}
	while(p)
	{
		fprintf(fp,"%s %s %d %s %f %s %ld %s\n",p->Number,p->Name,p->Old,p->Edu,p->Salary,p->Address,p->Time,p->Lesson);
		p=p->next;
    }
	fclose(fp);
}	
/***************************************************************************************************************************/
void readWorkerput ()           //运行前把文件内容读取到电脑内存
{ 
 
    int i=0;
	FILE *FP;
	FILE *fp;
	int b=i-1;
	int Num;
	int j=1;
	struct WORK *p=(struct WORK *)malloc(sizeof(struct WORK));
    fp=fopen("worker.txt","rb"); //以只读方式打开当前目录下的.txt
    if(fp==NULL)
    {
        printf("无法打开文件\n");
        printf("是否新建一个worker.txt(是:1否:2)\n");
        scanf("%d",&Num);
		if(Num==1)
		{
			fp = fopen("worker.txt","ab+");
		}
		else
		{
			exit(0);
		}
    }
 while(!feof(fp))
	{
		fscanf(fp,"%s",p->Number);
		fscanf(fp,"%s",p->Name);
		fscanf(fp,"%d",&p->Old);
		fscanf(fp,"%s",p->Edu);
		fscanf(fp, "%f",&p->Salary);
		fscanf(fp, "%s",p->Address);
		fscanf(fp, "%ld",&p->Time);
		fscanf(fp, "%s", p->Lesson);
		i++;
		addworker(p);
	}
	fclose(fp); 
} 