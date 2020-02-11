#include<stdio.h>

int main(void)
{
	int count =0;
	int n,i;
	scanf("%d", &n);
	if(n==0){
		printf("average = 0.0\ncount = 0");
	}
	else{
	double a[n];
	double sum =0;
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		if(a[i]>=60)
			count++;
		sum+=a[i];
	}
	printf("average = %.1f\ncount = %d",(double)sum/n,count);
	
	}
	return 0;
} 
