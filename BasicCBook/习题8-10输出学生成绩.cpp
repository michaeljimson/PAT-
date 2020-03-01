#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
	int n;
	scanf("%d", &n);
	float sum, max, min;
	
	int *p = (int*)calloc(n, sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d", p+i);
	//	printf("%d ", *(p+i));
	}
	max = min = sum =*p;
	
	for(int i=1;i<n;i++){
		if(max<*(p+i)){
			max=*(p+i);
		}
		if(min>*(p+i)){
			min=*(p+i);
		}
		
		sum+=*(p+i);
	}
	free(p);
	printf("average = %.2f\nmax = %.2f\nmin = %.2f", sum/n,max,min);
	return 0;
	
}
