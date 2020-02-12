#include<stdio.h>

int main(void)
{
	int i, n;
	int sum = 0;
	for(i=0;i<10000;i++)
	{
		scanf("%d", &n);
		if(n<0)
		break;
		if(n%2==1)
		sum+=n;
	}	
	printf("%d", sum);
	return 0;
}
