#include<stdio.h>

int main(void)
{
	int i, n,temp,min=100000;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &temp);
		if(temp<min)
		min=temp;
	}
	
	printf("min = %d", min);
	

	return 0;
}
