#include<stdio.h>

int main(void)
{
	double item, sum=0,i, j, temp;
	i=2;
	j=1;
	int n, count;
	scanf("%d", &n);
	for(count=0;count<n;count++)
	{
		item=(double)i/j;
		sum+=item;
		temp=i;
		i+=j;
		j=temp;
	}
	
	printf("%.2f", sum);
	return 0;
}
