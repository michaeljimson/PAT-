#include<stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	int month=1;
	int sum=1;
	int pre=0,now=0;
	if(sum==N){//判断输入N是否为1 
		printf("%d", month);
	}else{//第二月兔子总数无变化 
		month++;
		now=pre+sum;
		while(now<N){//第三月开始小兔子出生斐波那契数列 
			month++;
			pre=sum;
			sum=now;
			now=pre+sum;
		}
		
		printf("%d", month);
	}
	
	return 0;
}

