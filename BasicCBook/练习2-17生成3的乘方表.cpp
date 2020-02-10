#include<stdio.h>
#include<math.h>
int main(void)
{
	int n ,i=0;
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		printf("pow(3,%d) = %d\n", i, (int)pow(3,i));
	}
	return 0;
}
