/*
	题目：练习函数调用
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hello_world(void)
{
    printf("Hello, world!\n");
}
void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();/*调用此函数*/
}

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	three_hellos();


	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}