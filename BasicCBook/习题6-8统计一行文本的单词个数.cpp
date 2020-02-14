#include<stdio.h>

int main(void)
{
	char str[1111];
	gets(str);
	int count=0;
	int i =0;
	while(str[i]==' ')
	{
		i++;
	} 
	
	while(str[i]!='\0'){
		if(str[i]!=' '){
			count++;
			while(str[i]!=' ')
			{
				if(str[i]=='\0')
					break;
				i++;
			}
		}else{
		while(str[i]==' ')
			i++;
	}
	}
	printf("%d\n", count);
	
	return 0;
}
