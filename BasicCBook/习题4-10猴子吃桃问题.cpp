#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int sum=1;
	int i;
	for(i=1;i<n;i++)
	{
		sum+=1;
		sum*=2;
	}
	printf("%d", sum);
	
	return 0;
} 
