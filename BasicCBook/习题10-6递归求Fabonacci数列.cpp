#include <stdio.h>

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

/* 你的代码将被嵌在此处 */
int f( int n )
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else 
		return f(n-1)+f(n-2);
}
