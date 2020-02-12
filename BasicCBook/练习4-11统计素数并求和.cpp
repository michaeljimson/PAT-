#include<stdio.h>
#include<math.h>
int main(void)
{
	int m, n, sum=0, i,j, count =0, item;
	scanf("%d %d", &m, &n);
	for(i=m;i<=n;i++)
	{
		item=sqrt(i);
		for(j=2;j<=item;j++)
		{
			if(i%j==0)
			break;
		}
		if(j>item){
			if(i==1)
			count = count;
			else{
				sum+=i;
				count++;
			}
		}
		
	}
	printf("%d %d", count, sum);
	return 0;
}

