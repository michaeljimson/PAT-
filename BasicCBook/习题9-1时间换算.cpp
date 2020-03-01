#include<stdio.h>


int main(void)
{
	int hour, minute, second;
	scanf("%d:%d:%d", &hour, &minute, &second);
	int addsec;
	scanf("%d", &addsec);
	second+=addsec;
	if(second>=60){
		second%=60;
		minute++;
	}
	if(minute>=60){
		minute%=60;
		hour++;
	}
	if(hour>=24){
		hour%=24;
	}

	printf("%02d:%02d:%02d\n", hour, minute, second);
	
	return 0;
}
