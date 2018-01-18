/*
	题目：指向指针的指针
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	char *s[]={"man","woman","girl","boy","sister"};
	char **q;
	int k;
	for(k=0;k<5;k++)
	{
		q=&s[k];       /*在这里填入内容*/
		printf("%s\n",*q);
	}



	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}