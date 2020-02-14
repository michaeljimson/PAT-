#include<stdio.h>

int main(void)
{
	int a[10];
	int n, max,i,j, index;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++){
		max=a[i];
		index=i;
		for(j=i;j<n;j++){
			if(a[j]>max){
				max=a[j];
				index=j;
			}
		}
		if(index!=i){
			int temp;
			temp = a[i];
			a[i] = a[index];
			a[index] = temp;
		}
	}
	
	for(i=0;i<n;i++){
		if(i==0)
		printf("%d", a[i]);
		else
		printf(" %d", a[i]);
	} 
	
	return 0;
}
