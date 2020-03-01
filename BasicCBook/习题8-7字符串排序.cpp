#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[5][100]; 
	char temp[100];
	for(int i=0;i<5;i++){
		scanf("%s", a[i]);
		//printf("%s\n", a[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++)
		{
			if(strcmp(a[i], a[j])>0){
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	printf("After sorted:\n");
		for(int i=0;i<5;i++){
		printf("%s\n", a[i]);
	}

	return 0;
} 
