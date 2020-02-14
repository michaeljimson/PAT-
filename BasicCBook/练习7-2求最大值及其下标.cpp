#include<stdio.h>

int main(void)
{
	int n;
	int max=-100000, flag;
	int a[10];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]>max){
			max=a[i];
			flag=i;
		}
	}
	printf("%d %d", max,flag);
	return 0;
}
