#include<stdio.h>

int main(void)
{
	int m,n;
	scanf("%d %d", &m, &n);
	int a[m][m]; 
	int b[m]; 
	for(int i=0;i<m;i++)
		{b[i]=0; 
		}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			b[i]+=a[i][j];
		}
	}
	
	for(int i=0;i<m;i++)
	printf("%d\n", b[i]);
	
	return 0;
}
