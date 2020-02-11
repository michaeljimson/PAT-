#include<stdio.h>

int main(void)
{
	int minute, t=0;
	double x;
	scanf("%lf %d", &x, &minute);
	double money = 0;
	if(minute/5){
		t=minute/5;
	}
	if(x<=3){
		money=10+2*t;
	}
	else if(x<=10){
		money=10+(x-3)*2+t*2;
	}
	else if(x>10){
		money=24+(x-10)*3+t*2;
	}
	
	printf("%.0f", money);
	
	return 0;

}
