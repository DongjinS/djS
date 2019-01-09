#include <stdio.h>
int main(void)
{
	float a=0;
	printf("Enter an amount : ");
	scanf("%f", &a);
	float at=a*1.005;
	printf("/nWith tax added : $%.2f",at);
	return 0;
}