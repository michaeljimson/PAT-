#include<stdio.h>

int main(void)
{
	double sum = 0;
	int n;
	int i;
	scanf("%d", &n);
	for(i=n;i>0;i--)
	{
		sum+=(double)1/i;
	}
	printf("sum = %.6f",sum);
	return 0;
}
