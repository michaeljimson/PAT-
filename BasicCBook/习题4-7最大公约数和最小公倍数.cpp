#include<stdio.h>

int g(int a, int n);

int main(void)
{
	int m, n;
	scanf("%d %d", &m, &n);
	int x = g(m, n);
	int y = m*n/x;
	printf("%d %d", x, y);
	
	return 0;
	
}

int g(int a, int b)
{
	if(a%b==0)
		return b;
	else
		return g(b,a%b);
}
