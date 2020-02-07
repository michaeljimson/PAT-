#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节此处不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

/* 你的代码将嵌入此处 */

void Shift( char s[] )
{	
	char a[3];
	
    int i,j;
    for(i = 0; i < 3;i++)
        a[i] = s[i];
        
    for(i=3;s[i]; i++)
        s[i-3]=s[i];
        
    for(j=i-3, i = 0; i < 3;i++)
        s[j++] = a[i];

} 

