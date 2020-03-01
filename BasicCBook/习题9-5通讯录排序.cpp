#include<stdio.h>
#include<string.h>

typedef struct homie{
	char name[100];
	long int date;
	char phone[100];
} Homie;

int main(void)
{
	int n;
	scanf("%d", &n);
	Homie homie[n];
	Homie temp;
	

	for(int i=0;i<n;i++){
		scanf("%s %ld %s", &homie[i].name, &homie[i].date, &homie[i].phone);
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(homie[i].date>homie[j].date){
				temp=homie[i];
				homie[i]=homie[j];
				homie[j]=temp;
			}
		}
		printf("%s %ld %s\n", homie[i].name, homie[i].date, homie[i].phone);
	}
	
	return 0;
}
