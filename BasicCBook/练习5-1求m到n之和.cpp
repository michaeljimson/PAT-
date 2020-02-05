#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sum(int m, int n)
{
	int i = m,sum1;
	for(sum1=0;i<=n;i++){
		sum1 += i;
	}
	 
	return sum1;
}
