#include<stdio.h>
#include<math.h>
int main(void)

{
	double eps, item= 1 ,sum = 0;
	int i =1;
	int flag=1;
	scanf("%lf", &eps);
	do{
		item=flag*1.0/i;
		sum+=item;
		flag*=-1;
		i+=3;
	}while(fabs(item)>eps);
	printf("sum = %.6f", sum);
	return 0;
}
