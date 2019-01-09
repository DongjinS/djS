#include<stdio.h>
int main(void)
{
	float l,r,p;
	printf("Enter amount of loan : ");
	scanf("%f", &l);
	printf("Enter interest rate : ");
	scanf("%f", &r);
	printf("Enter monthly payment : ");
	scanf("%f", &p);
	r=r/1200;
	l=l*r+l-p;
	printf("Balance remaining after first payment : $%.2f",l);
	l=l*r+l-p;
	printf("Balance remaining after second payment : $%.2f",l);
	l=l*r+l-p;
	printf("Balance remaining after third payment : $%.2f",l);
	return 0;
}
	