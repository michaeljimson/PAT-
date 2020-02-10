#include<stdio.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	double sum = a+b+c+d;
	printf("Sum = %.0f; Average = %.1f", sum, (double)sum/4);
	return 0;
}
