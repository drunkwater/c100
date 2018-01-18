/*
	题目：创建一个链表。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>




typedef struct LNode
{
	int data;
	struct LNode *next;
}L;



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
	printf("***************************\n");
	printf("刚刚创建的链表：\n");
	while(NULL!=p->next)
	{
		p=p->next;
		printf("data=%d\n",p->data);
	}
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
	print_list(head);


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

