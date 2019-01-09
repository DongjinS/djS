#include<stdio.h>
int main(void)
{
	float x;
	printf("give me any number : ");
	scanf("%f",&x);
	x=3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;	
	printf("%.2f",x);
	return 0;
}