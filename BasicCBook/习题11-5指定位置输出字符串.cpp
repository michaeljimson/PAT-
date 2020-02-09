#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}


/* 你的代码将被嵌在这里 */
char *match( char *s, char ch1, char ch2 )
{
	char *pch1, *ptemp;
	int cnt = 0, i=0;
	int order[80]={-1};
	
	while(s[cnt]!='\0'){
		if(s[cnt]== ch1) order[i++] = cnt;
		cnt++;
	}
	
	if(order[0]!=-1){
		ptemp = &s[order[0]];
		do{
			printf("%c", *ptemp);
			if(*ptemp==ch2) break;
			ptemp++;
			
		}while(*ptemp!='\0');
		printf("\n");
	}

	if(order[0]!=-1){
		pch1 = &s[order[0]];
		return pch1;
	}
	if(order[0]==-1){
		*pch1='\0';
		ptemp=NULL;
		puts("");// == printf("\n");
		return s+cnt;
	}
} 
