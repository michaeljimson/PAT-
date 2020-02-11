#include<stdio.h>

int main(void)
{
	int a[3], i;
	int temp;
	for(i=0;i<3;i++){
		scanf("%d", &a[i]);
	}
	if(a[0]>a[1]){
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
	if(a[1]>a[2]){
		
		temp = a[1];
		a[1] = a[2];
		a[2] = temp;
	}
	if(a[0]>a[1]){
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}

	
	printf("%d->%d->%d",a[0] ,a[1] ,a[2]);
	return 0;
}
