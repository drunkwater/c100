/*
	题目：反向输出一个链表。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct LNode
{
	int data;
	struct LNode *next;
}L;

L *creat_node(int data);
void print_list(L *pH);
void tail_insert(L *pH,L *new);
void trave_list(L *pH);
void top_insert(L *pH,L *new);



//创建节点
L *creat_node(int data)
{
	L *p=malloc(sizeof(L));
	if(NULL==p)
	{
		printf("malloc error!\n");
		return NULL;
	}
	memset(p,0,sizeof(L));
	p->data=data;
	p->next=NULL;
	return p;
}

//尾插法
void tail_insert(L *pH,L *new)
{
	L *p=pH;
	while(NULL!=p->next)
	{
		p=p->next;
	}
	p->next=new;
}

//打印链表
void print_list(L *pH)
{
	L *p=pH;
	while(NULL!=p->next)
	{
		p=p->next;
		printf("data=%d\n",p->data);
	}
}

//反向输出链表
void trave_list(L *pH)
{
	L *p=pH->next;
	L *pBack;
	while(NULL!=p->next)
	{
		pBack=p->next;
		if(p==pH->next)
		{
			p->next=NULL;
		}
		else
		{
			p->next=pH->next;
		}
		pH->next=p;
		p=pBack;
	}
	top_insert(pH,p);
}

//头插法
void top_insert(L *pH,L *new)
{
	L *p=pH;
	new->next=pH->next;
	pH->next=new;
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i,n,j;
	L *head=creat_node(0);
	printf("请输入想要创建节点的个数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("第%d个节点的数据：",i);
		scanf("%d",&j);
		tail_insert(head,creat_node(j));
	}
	printf("***************************\n");
	printf("刚刚创建的链表：\n");
	print_list(head);
	trave_list(head);
	printf("***************************\n");
	printf("反向输出的链表：\n");
	print_list(head);


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

