#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100], *p;
	int n = 0;
	gets(str);
	p=str;
	while(*p!='\0'){
		if(*p!='A'&&*p!='E'&&*p!='I'&&*p!='O'&&*p!='U'&&*p>='A'&&*p<='Z')
		{
			n++;
		}
		p++;
	}
	printf("%d", n);
	
	return 0;
}
