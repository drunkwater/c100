/*
	题目：简单的结构体应用实例
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct programming
{
	float constant;
	char *pointer;
};


int main( int argc, char *argv[] )
{
	/* sanity check */
	int i = 0, j = 0, k = 0;
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);




	struct programming variable;
	char string[] = "drunk water";

	variable.constant = 1.23;
	variable.pointer = string;

	printf("%f\n", variable.constant);
	printf("%s\n", variable.pointer);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}