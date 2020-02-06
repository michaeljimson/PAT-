#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number )
{
	int n = 0;
	int m = number;
	int a[5];
	int sum = 0;
	int temp;
	while(m)
	{
		a[n] = m%10;
		n++;
		m /= 10; 
	}
	//printf("aaaaaa%d\n", n);
	
	if(n==3)
		{
			for(;n>0;n--)
			{
				temp = a[n-1]*a[n-1]*a[n-1];
				sum += temp;
			}
			if(sum == number)
			return 1;
			else return 0;
		}
	else if(n==4)
			{
			for(;n>0;n--)
			{
				temp = a[n-1]*a[n-1]*a[n-1]*a[n-1];
				sum += temp;
			}
			if(sum == number)
			return 1;
			else return 0;
		}
		else 
			{
			for(;n>0;n--)
			{
				temp = a[n-1]*a[n-1]*a[n-1]*a[n-1]*a[n-1];
				sum += temp;
			}
			if(sum == number)
			return 1;
			else return 0;
		}
}
void PrintN( int m, int n )
{
	m=m+1;
	for(;m<n;m++)
	{
		if ( narcissistic(m) ) 
		printf("%d\n", m);
	}
}

