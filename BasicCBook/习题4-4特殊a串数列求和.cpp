#include<stdio.h>

int main(void)
{
	int a, n, item, sum=0;
	scanf("%d %d", &a, &n);
	int i;
	item=a;
	for(i=0;i<n;i++)
	{
		sum+=item;
		item*=10;
		item+=a;	
	}
	
	printf("s = %d", sum);
	return 0;
}
