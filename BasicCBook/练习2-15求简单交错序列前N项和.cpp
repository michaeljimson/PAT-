#include<stdio.h>

int main(void)
{
	int n, count, i=1;
	double sum = 0;
	scanf("%d", &n);
	int flag = 1;
	for(count=1;count<=n;count++){
		sum+= (double) flag*1/i;
		i+=3;
		flag*=-1;
	}
	printf("sum = %.3f", sum);
} 
