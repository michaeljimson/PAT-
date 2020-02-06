#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit )
{
	int m;
	if(number < 0)
		m = -number;
	else
		m = number;
	if(m==0&&digit==0)
		return 1;
		
	int n = 0;
	int temp;
	while(m!=0){
		 temp = m%10;
		 if(temp==digit)
		 	n++;
		 m/=10;
	}
	return n;
} 
