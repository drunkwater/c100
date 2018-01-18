/*
	题目：企业发放的奖金根据利润提成。

	利润(I)低于或等于10万元时，奖金可提10%；
	利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
	20万到40万之间时，高于20万元的部分，可提成5%；
	40万到60万之间时高于40万元的部分，可提成3%；
	60万到100万之间时，高于60万元的部分，可提成1.5%；
	高于100万元时，超过100万元的部分按1%提成。
	从键盘输入当月利润I，求应发放奖金总数？

	程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define WAN (10000)

int main( int argc, char *argv[] )
{
	/* sanity check */
	printf("\n%s : %d, enter\n", __FILE__, __LINE__);

	int i;
	double lirun;
	double jiangjin = 0;
	float fanwei[] = {100000, 200000, 400000, 600000, 1000000};
	float ticheng[] = {0.1, 0.075, 0.05, 0.03, 0.015, 0.01};
	printf("您好，请问您的净利润是多少？\n");
	scanf("%lf", &lirun);
	for (i=0;i<5;i++)
	{
		if (lirun < fanwei[i])
		{
			jiangjin += lirun * ticheng[i];
			break;
		}
		else
		{
			jiangjin += fanwei[i] * ticheng[i];
			lirun -= fanwei[i];
		}
	}
	printf("奖金是%.2lf\n", jiangjin);

	printf("\n%s : %d, exit\n", __FILE__, __LINE__);
	return 0;
}

