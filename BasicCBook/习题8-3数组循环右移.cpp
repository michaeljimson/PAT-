#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int ArrayShift( int a[], int n, int m )
{
	if(m>n){
		if(m%n==0)
		return 1;
		else{
			m%=n;
			int temp[m];
		int i, j;
		for(i=0;i<m;i++)
		{
			temp[i] = a[n-m+i];
		}
		for(j=n-m;j>=0;j--)
		{
			a[j+m] = a[j];
		}
		for(i=0;i<m;i++)
		{
			a[i] = temp[i];
		}
		}
	}
	else{
	
	int temp[m];
	int i, j;
	for(i=0;i<m;i++)
	{
		temp[i] = a[n-m+i];
	}
	for(j=n-m;j>=0;j--)
	{
		a[j+m] = a[j];
	}
	for(i=0;i<m;i++)
	{
		a[i] = temp[i];
	}
	
	
	}
	//A B C D E F G
}
