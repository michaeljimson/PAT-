#include<stdio.h>

int main(void)
{
	int a[10], b[10];
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		b[n-i-1]=a[i];
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d", b[i]);
		if(i!=n-1)
		printf(" ");
	}
	
	return 0;
	
}
