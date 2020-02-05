#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
 void pyramid( int n )
 {
 	int i,j,temp;
	 temp = n;
	 for(i=1;i<=n;i++){
	 	for(j=1;j<temp;j++){
	 		printf(" ");
	 	}
		 for(j=1;j<=i;j++){
	 		printf("%d ", i);
	 	}
	 	
	 printf("\n");	
	 temp--;
	 } 
 } 
