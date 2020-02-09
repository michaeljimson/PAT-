#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供 */

int main()
{
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在此处 */
#include<string.h>
 
char *search(char *s, char *t)
{	
	char *p=NULL;
	int i,j,k=0;
	int lens,lent;
	lens = strlen(s);
	lent = strlen(t);
	for(i=0;i<lens;i++){
		j=i;
		while(s[j]==t[k]){
			k++;
			j++;
		}
		if(k>=lent){
			p=&s[i];
			return p;
		}
		
		k=0;
	}
	
	return p;
	
} 


