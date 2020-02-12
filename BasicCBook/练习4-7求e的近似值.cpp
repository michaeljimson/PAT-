#include <stdio.h>


int main(void)
{
	int n, i;
	double e = 1, temp=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		temp/=i;
		e+=temp;
	}
	printf("%.8f", e);
	
	
	return 0;
}


