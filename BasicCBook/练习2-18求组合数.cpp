#include<stdio.h>

double fact(int n);

int main(void)

{
	int m, n;
	scanf("%d %d", &m, &n);
	if(m==n)
	printf("result = 1");
	else {
	double sum = fact(n)/fact(m)/fact(n-m);
	printf("result = %.f", sum);
	return 0;
}
}
double fact(int n)
{
	if(n==1)
		return 1;
	else
		return fact(n-1)*n;
	
}
