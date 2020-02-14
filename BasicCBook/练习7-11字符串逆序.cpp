#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100], ch;
	int count, i;
	gets(str);
	count = strlen(str);
	for(i=count-1;i>=0;i--){
		printf("%c", str[i]);
	}
	
	return 0;
}
