#include<cstdio>

int main(void)
{
	int n, i=0;
	scanf("%d", &n);
	while(n!=1){
		
		if(n%2==1){
			n=3*n+1;
			
		}
		n/=2;
		i++;
	}
	
	printf("%d", i);
	
	return 0;
}
