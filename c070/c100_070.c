/*
	题目：编写input()和output()函数输入，输出5个学生的数据记录。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct{
	char name[20];
	char sex[5];
	int  age;
}Stu;


void input(Stu*stu)
{
	int i;
	for(i=0;i<5;i++)
		scanf("%s%s%d",stu[i].name,stu[i].sex,&(stu[i].age));
}
void output(Stu*stu)
{
	int i;
	for(i=0;i<5;i++)
		printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
}




int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	Stu stu[5];
	printf("请输入5个学生的信息：姓名 性别 年龄:\n");
	input(stu);
	printf("5个学生的信息如下：\n姓名  性别  年龄\n");
	output(stu);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}