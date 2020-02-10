#include<stdio.h>

int main(void)
{
	int n, flag = 1;
	double sum=0;
	scanf("%d", &n);
	if(n==1)
	printf("%.3f", (double)n);
	else{
		
		double x ,i,temp=1;
		for(i=1;i<=n;i++){
			
				x=flag*i/temp;
				temp+=2;
				flag*=-1;
				sum+=x;
			}
		printf("%.3f", sum);
	}
	return 0;
}
