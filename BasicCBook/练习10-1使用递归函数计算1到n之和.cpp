#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在此处*/
int sum( int n )
{
	if(n<=0)
		return 0;
	else{
		int i, sum = 0;
		for(i=0;i<=n;i++){
			sum+=i;
		}
		return sum;
	}
}
