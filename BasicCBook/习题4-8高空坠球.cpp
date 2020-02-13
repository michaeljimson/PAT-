#include<stdio.h>

int main(void)
{
	double h ,n;
	double d, item;
	scanf("%lf %lf", &h, &n);
	item=h;
	if(n==0)
	printf("0.0 0.0");
	else{
		
	for(int i = 0; i<n; i++)
	{
		d+=item*2;
		item/=2;	
	}
	printf("%.1f %.1f", d-h, item);
	
	}
	
	return 0;
}
