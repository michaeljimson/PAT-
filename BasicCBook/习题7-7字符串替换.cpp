#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100], *p;
	gets(str);
	p=str;
	while(*p){
		if(*p>='A'&&*p<='Z')
			*p='Z'-*p+'A';
			
			p++;
	}	
	
	printf("%s", str);
	return 0;
}
