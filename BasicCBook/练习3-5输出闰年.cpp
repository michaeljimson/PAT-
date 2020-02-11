#include<stdio.h>

int main()
{
	int year;
	
	scanf("%d", &year);
	if(year>=2001&&year<=2100)
	{
		int flag = -1;
		int i =2001;
		for(;i<=year;i++){
			if((i%4==0&&i%100!=0)||(i%400==0))
			{	
				printf("%d\n", i);
				flag=1;
			}
	}
		if(flag==-1)
		printf("None");
	}
	else{
		printf("Invalid year!");
	}	
	
	return 0;
}
