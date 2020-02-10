#include<stdio.h>

int main(void)
{
	double x, m;
	scanf("%lf", &x);
	if(x<=0)
		printf("Invalid Value!");
	else if(x<=50) 
	{
			m = 0.53*x;
			printf("cost = %.2f", m);
	
	}	else 
	{
			m = 0.53*50 + 0.58*(x-50);
			printf("cost = %.2f", m);
	
	}
	return 0;
	
}
