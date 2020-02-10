#include <stdio.h>
#include<math.h>

int main(void)
{
	int m ,n;
	double r, s, sum=0; 
	scanf("%d %d", &m, &n);
	if(m==n)
	 {
	 sum = pow(m,2)+ (double)1/m;
	 printf("sum = %.6f", sum);
	 }
	 else{
	 	int i=m;
	 	for(;i<=n;i++){
	 		r = (double) 1/i;
	 		s = pow(i, 2);
	 		sum+=r+s;
	 	}
	  printf("sum = %.6f", sum);
	
	 }
	 return 0;
}
