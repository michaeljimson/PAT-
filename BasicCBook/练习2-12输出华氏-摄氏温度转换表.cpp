#include<stdio.h>

int main(void)
{
	int lower, upper, i;
	scanf("%d %d", &lower, &upper);
	if(lower>upper)
		printf("Invalid.");
	else{
	
		double c;
		printf("fahr celsius\n");
		for(i=lower;i<=upper;i+=2)
		{
			c=(double) 5*(i-32)/9;
			printf("%d%6.1f\n", i, c);
		}		
	}
	return 0;
}
