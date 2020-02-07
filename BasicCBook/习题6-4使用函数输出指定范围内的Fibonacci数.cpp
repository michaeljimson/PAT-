#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在此处 */
int fib( int n )
{
	if(n==1||n==2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
} 

void PrintFN( int m, int n )
{
	int i;
	int flag = 0;
	for(i=1;i<21;i++)
	{
		if(fib(i)>=m&&fib(i)<=n){
			if(flag==0){
			printf("%d", fib(i));
			flag++;
			}
			else
			printf(" %d", fib(i));
			
		}
	} 
	if(flag==0)
		printf("No Fibonacci number");
		
}

//1 1 2 3 5 8 13 21 34
//1 2 3 4 5 6 7  8  9   
