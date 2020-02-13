#include<stdio.h>

int main(void)
{
	int fen5=0, fen2=0, fen1=0, count=0;
	int x, temp1, temp2;
	scanf("%d", &x);
	fen5=x/5;
	while(fen5>0){
		temp1=x-fen5*5;
		fen2=temp1/2;
		while(fen2>0){
			if(fen2*2+fen5*5==x)
			{
				fen2--;
				continue;
			}
			temp2=temp1-fen2*2;
			fen1=temp2;
			printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen5+fen2+fen1);
			count++;
			fen2--;
		}
		fen5--;
	}
	printf("count = %d\n", count);
	
	return 0;
}
