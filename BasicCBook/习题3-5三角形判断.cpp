#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double L, A, d1, d2, d3;
	d1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	d2=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	d3=sqrt(pow(x2-x3,2)+pow(y2-y3,2));

	if(d1+d2>d3&&d1+d3>d2&&d2+d3>d1){
		L=d1+d2+d3;
		double s =(d1+d2+d3)/2;
		A=sqrt(s*(s-d1)*(s-d2)*(s-d3));
		printf("L = %.2f, A = %.2f", L,A);
		
	}
	else 
		printf("Impossible");
	return 0;
}
