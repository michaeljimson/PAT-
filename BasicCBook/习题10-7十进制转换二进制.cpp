#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在此处 */
void dectobin( int n )
{
	if(n/2>0)
		dectobin(n/2);
		//10 / 2 = 5
		//5 / 2 = 2
		//2 / 2 = 1
		//1 / 2 = 0
	printf("%d", n%2);
	
} 
