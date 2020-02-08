#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}


/* 你的代码将被嵌在此处*/
int search( int n )
{
	int i = 11;
	int count = 0;
	int temp1, temp2, temp3;
	for(;pow(i,2)<=n;i++){
		int t = pow(i,2);
		temp1 = t%10;
		t/=10;
		temp2 = t%10;
		t/=10;
		temp3 = t;
		if(temp1==temp2||temp2==temp3||temp3==temp1){
			count++; 
		}		
	}
	return count;
	 
} 
