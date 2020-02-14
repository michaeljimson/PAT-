#include<stdio.h>

int main(void)
{
	int year,month,day;
	int sum = 0;
	int a[12]={31, 28, 31, 30 ,31, 30, 31, 31, 30, 31, 30, 31};
	int b[12]={31, 29, 31, 30 ,31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d/%d/%d", &year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0){
		for(int i=0;i<month-1;i++){
			sum+=b[i];
		}
		sum+=day;
		
	}else{
		for(int i=0;i<month-1;i++){
			sum+=a[i];
		}
		sum+=day;
	}
	printf("%d\n", sum);
	
	
	return 0;
}
