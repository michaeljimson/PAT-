#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x )
{
	int flag=-1;
	double temp=1,n=2,sum=1;
	double temp1=1,temp2=1;
	while(fabs(temp)>e){
		temp1=temp1*(n-1)*n;
		n+=2;
		temp2=pow(x,2)*temp2;
		temp=flag*temp2/temp1;
		sum+=temp;
		flag*=-1;
	}
	
	return sum;
}

