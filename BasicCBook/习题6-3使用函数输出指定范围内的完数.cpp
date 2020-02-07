#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum( int number )
{
	int  i;
	int sum = 1;
	if(number==1)
		return 1;
	for(i=2;i<=number/2;i++){
		if(number%i==0)
			sum+=i;
	}
	return sum;
}
void PrintPN( int m, int n )
{
	int i, j;
	int flag = 0;
	for(i=m;i<=n;i++){
		if( factorsum(i) == i)
			{
			printf("%d = 1",i);
			for(j=2;j<=i/2;j++){
				if(i%j==0)
				printf(" + %d", j);
			}
			printf("\n");
			flag = 1;
		}	
	}
	if(flag==0)
		printf("No perfect number\n");
}
