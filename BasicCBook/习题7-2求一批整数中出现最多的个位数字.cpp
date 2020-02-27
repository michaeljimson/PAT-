#include<stdio.h>

int main(void)
{
	int n, max=-1;
	int a[10]={0};
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int m, temp;
		scanf("%d", &m);
		while(m){
			temp=m%10;
			a[temp]++;
			m/=10;
		}
	}
	for(int i=0;i<10;i++){
		if(max<a[i])
		max=a[i];
	}
	printf("%d:",max);
	for(int i=0;i <10;i++){
		if(a[i]==max){
			printf(" %d", i);
		}
	}
	return 0;
} 
