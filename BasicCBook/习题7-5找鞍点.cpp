#include<stdio.h>

int main(void)
{
	
	int n,i,j,l,k;
	scanf("%d", &n);
	int a[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);

		}
	}
	
	int index=0,judge=1;
	k=0;
	l=0; 
    if(n==1){
        printf("0 0");
    }else{  
        for(i=0; i<n; i++){  
            index=i;   
            for(l=0; l<n; l++) {   
                if(a[i][k]<=a[i][l]) {  
                    k=l;  
                }  
            }  
            
            
            for(j=0; j<n; j++){   
                if(a[index][k]>a[j][k]){ 
                    index=j;  
                    break;  
                }  
            }  
            
            if(i==index){  
                judge=0;  
                break;  
            }  
        }  
        if(judge==0)	printf("%d %d",i,k);  
        else 		printf("NONE");  
    }  
	return 0;

}
