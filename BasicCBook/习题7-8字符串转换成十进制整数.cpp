#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[100], *p, a[100];
	gets(str);
	p=str;
	int flag=1, i=0;
	while(*p!='#'){
		if(*p>='0'&&*p<='9'||*p>='A'&&*p<='F'||*p>='a'&&*p<='f'){
			break;
		}
		if(*p=='-'){
			flag=-1;
			break;
		}
		p++;
	}
	p=str;
	while(*p!='#'){
		
		if(*p>='0'&&*p<='9'||*p>='A'&&*p<='F'||*p>='a'&&*p<='f'){
			a[i]=*p;
			i++;
		}
		p++;
	}
	p=a;
	int sum=0;
	while(*p){
		if(*p>='A'&&*p<='F'){
			sum = sum*16+*p-'A'+10;
		}
		else if(*p>='a'&&*p<='f'){
			sum = sum*16+*p-'a'+10;
		}
		
		else if(*p>='0'&&*p<='9'){
			sum = sum*16+*p-'0';
		}
		p++;
	}
	sum*=flag;
	printf("%d", sum);
	
	
	return 0;
}
