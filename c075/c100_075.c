/*
	题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>




double  evenumber(int n);
double  oddnumber(int n);

double  evenumber(int n)
{
	double s=0,a=0;
	int i;
	for(i=2;i<=n;i+=2)
	{
		a=(double)1/i;
		s+=a;
	}
	return s;
}
double  oddnumber(int n)
{
	double s=0,a=0;
	int i;
	for(i=1;i<=n;i+=2)
	{
		a=(double)1/i;
		s+=a;
	}
	return s;
}



int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);


	int n;
	double r;
	double (*pfunc)(int);
	printf("请输入一个数字：");
	scanf("%d",&n);
	if(n%2==0) pfunc=evenumber;
	else pfunc=oddnumber;

	r=(*pfunc)(n);
	printf("%lf\n",r);



	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}