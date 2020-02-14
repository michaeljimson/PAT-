#include<stdio.h>

int main(void)
{
	int n1, n2;
	int a[20],b[20], c[20];
	int i, j,k=0;
	scanf("%d", &n1);
	for(i=0;i<n1;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &n2);
	for(i=0;i<n2;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j])
				break;
		}
		if(j>=n2)
		{
			c[k]=a[i];
			k++;
		}
	}
	for(i=0;i<n2;i++){
		for(j=0;j<n1;j++){
			if(b[i]==a[j])
				break;
		}
		if(j>=n1)
		{
			c[k]=b[i];
			k++;
		}
	}
	printf("%d", c[0]);
	for(i=1;i<k;i++){
		for(j=0;j<i;j++){
			if(c[i]==c[j])
				break;
		}
		if(j>=i)
			printf(" %d", c[i]);
	}
	printf("\n");


	return 0;
}
