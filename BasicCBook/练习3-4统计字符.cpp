#include<stdio.h>

int main(void)
{
	char a[10];
	int i, letter = 0, blank = 0, digit = 0, other = 0;
	for(i=0;i<10;i++)
	{
		scanf("%c", &a[i]);
		if(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
			letter++;
		else if(a[i]>='0'&&a[i]<='9')
			digit++;
		else if(a[i]==' '||a[i]=='\n')
			blank++;
		else
			other++;
		
	}	
	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
	return 0;
}
