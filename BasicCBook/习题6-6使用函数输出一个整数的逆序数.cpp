#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将嵌在此处 */
int reverse( int number )
{
	int n,sum=0;
	if(number==0)
		return number;
	while(number%10==0){
		number/=10;
	}
	while(number!=0){
		n = number%10;
		sum = 10*sum +n;
		number/=10;
	}
	
	return sum;
}
