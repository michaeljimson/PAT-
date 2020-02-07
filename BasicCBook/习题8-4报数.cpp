#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在此处 */
void CountOff( int n, int m, int out[] )
{

	int a[MAXN];
	int i, j;
	int flag = 0;
	for(i=0;i<n;i++){
		a[i] = i+1;
	}
	int count = 0;
	i=0;
	j=0;
	
	while(count<n){
		if(a[i]!=-1){
			flag++;
		}
		if(flag==m){
			j++;
			out[i]=j;
			flag = 0;
			a[i] = -1;
			count++;
		}
		i++;
		
		if(i==n)
			i=0;
	}

	
	
} 
