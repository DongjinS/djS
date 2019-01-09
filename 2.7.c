#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter a dollar amount : ");
	scanf("%d",&a);
	b=a/20;
	a=a-b*20;
	printf("$20 bills : %d",b);
	b=a/10;
	a=a-b*10;
	printf("$10 bills : %d",b);
	b=a/5;
	a=a-b*5;
	printf("$5 bills : %d",b);
	printf("$1 bills : %d",a);
	return 0;
}
