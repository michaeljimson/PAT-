#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime( int p )
{
	if(p<=1)
		return 0;
	int i,j,temp;
	temp=0;
	j=p/2;
	for(i=2;i<=j;i++){
		if(p%i==0)
		{
			temp = 1;
			break;
		}	
	}
	if(temp == 0)
	return 1;
	else
	return 0;
}



int PrimeSum( int m, int n )
{
	int p, sum;
	sum = 0;
	for(p=m;p<=n;p++)
	{
		if(prime(p))
			sum += p;
	}
	return sum;
	
	
}
