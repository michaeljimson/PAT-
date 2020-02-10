#include<stdio.h>

int fact(int n);

int main(void)
{
	int n, i=1;
	int sum = 0;
	scanf("%d", &n);
		for(;i<=n;i++)
		{
			sum += fact(i);
		}
	printf("%d", sum);
	return 0;
}

int fact(int n)
{
	if(n==1)
		return 1;
	else
		return fact(n-1)*n;
}
