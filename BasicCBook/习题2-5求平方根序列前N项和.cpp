#include<stdio.h>
#include<math.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	double sum=0;
	for(i=1;i<=n;i++){
		sum+=sqrt(i);
	}
	printf("sum = %.2f", sum);
	return 0;
}
