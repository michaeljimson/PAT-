#include <stdio.h>

double fn( double x, int n );
double fac( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}

/* 你的代码将被嵌在此处 */
double fn( double x, int n )
{
	double sum=0;
	if(n==1)
	{
		sum = x;
	}
	else
	{
		sum += x-x*fn(x,n-1);
	}
	
	return sum;
}








/*
double fn( double x, int n )
{
	int i;
	double sum = 0;
	for(i=1;i<=n;i++){
		if(i%2==1){
			sum+=fac(x,i);
		}
		else
			sum-=fac(x,i);
	}
	
	return sum;
	
}

double fac( double x, int n )
{
	if(n==1)
		return x;
	else
		return x * fac(x, n-1);
}
*/
