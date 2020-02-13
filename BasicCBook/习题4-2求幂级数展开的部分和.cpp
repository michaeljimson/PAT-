#include<stdio.h>
#include<math.h>

int main(void)
{
	double x, item=1, sum=0;
	scanf("%lf", &x);
	int i=1;
	do{
		sum+=item;
		item*=x;
		item/=i;
		i++;
	}
	while(fabs(item)>=0.00001);
	sum+=item;
	printf("%.4f", sum);
	return 0;
}
