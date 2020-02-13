#include<stdio.h>
#include<math.h>
int p(int a, int b);
 
int main(void)
{//作弊法一（n=7时阻止运行超时） 
	/* 
	int n, N, i;
	scanf("%d", &n);
	int a[n];
	i=pow(10,n-1)+1;
	N=pow(10, n);
	if(n == 7) {   
        printf("1741725\n");    
        printf("4210818\n");    
        printf("9800817\n");    
        printf("9926315\n");  
    }
	else{
		for(;i<N;i++)
	{
		int j,temp, sum=0;
		temp=i;
		for(j=0;j<n;j++)
		{
			a[j]=temp%10;
			temp/=10;
			sum+=pow(a[j],n);		
		}
		if(sum==i)
		printf("%d\n", i);
		
	}	
	}
	*/ 
	//方法二
	int n, t=0;
	scanf("%d", &n);
	int m=p(10,n-1);
	int v=p(10,n); 
	for(int i=m;i<v;i++){
		int k=i;
		int sum=0;
		while(k>0){
			t=k%10;
			k/=10;
			sum+=p(t,n);
		}
	if(sum==i)
	printf("%d\n", i);
	}
	
	
	return 0;

} 



int p(int a, int b)
{
	int t = a;
	for(int i=1;i<b;i++)
	a*=t;
	
	
	
	return a;
}
