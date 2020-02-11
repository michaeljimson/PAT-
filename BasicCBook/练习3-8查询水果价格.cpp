#include<stdio.h> 

int main(void)
{
	double apple=3.00, pear=2.50, orange=4.10, grape=10.20;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int search, i;
	for(i=0;i<5;i++)
	{
		scanf("%d", &search);
		if(search==0)
			break;
		if(search<0||search>4)
		printf("price = 0.00\n");
		else
		{
			if(search==1)
			printf("price = %.2f\n", apple);
			if(search==2)
			printf("price = %.2f\n", pear);
			if(search==3)
			printf("price = %.2f\n", orange);
			if(search==4)
			printf("price = %.2f\n", grape);
		}
	}
	return 0;
}
