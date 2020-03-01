#include<stdio.h>
#include<math.h>
#define ACC 0.05

typedef struct node{
	double x;
	double y;
}Node;

int main(void)
{
	Node n1,n2;
	double x1, y1;
	scanf("%lf %lf %lf %lf", &n1.x, &n1.y, &n2.x, &n2.y);

	x1=n1.x+n2.x;
	y1=n1.y+n2.y;

	if(fabs(x1)<ACC){
		x1=0.0;
	}
	if(fabs(y1)<ACC){
		y1=0.0;
	}
	
	printf("(%.1f, %.1f)", x1, y1);
	
	return 0;
}
