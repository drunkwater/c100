/*
	题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct man{
	char name[20];
	int  age;
}
person[3]={"li",18,"wang",25,"sun",22};



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	struct man *q,*p;
	int i,m=0;
	p=person;
	for(i=0;i<3;i++)
	{
		if(m<p->age)
		{
			m=p->age;
			q=p;
		}
		p++;
	}
	printf("%s %d\n",q->name,q->age);



	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}