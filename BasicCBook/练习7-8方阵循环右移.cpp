#include<stdio.h>

int main(void)
{
	int a[6][6], b[6][6];
	int m ,n, i, j;
	scanf("%d %d", &m,&n);
	int temp = m%n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][(n-temp+j)%n];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%d ", b[i][j]);
		
		printf("\n");
	}
	
	
	return 0;
}
