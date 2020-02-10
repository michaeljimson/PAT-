#include<stdio.h>
int main(void)
{
	double x, n;
	scanf("%lf", &x);
	if(x==0)
		printf("f(%.1f) = 0.0", x);
	else
		printf("f(%.1f) = %.1f", x, 1/x);
		
	return 0;
}
