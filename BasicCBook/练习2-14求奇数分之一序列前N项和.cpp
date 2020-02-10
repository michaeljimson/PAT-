#include<stdio.h>

int main(void)
{
	int n, count;
	double i, sum;
	
	scanf("%d", &n);
	sum =0; count = 1;
	for(i=1;count <=n;i+=2)
	{
		sum+= 1/i;
		count++;
	}
	printf("sum = %.6f", sum);
	return 0;
}
