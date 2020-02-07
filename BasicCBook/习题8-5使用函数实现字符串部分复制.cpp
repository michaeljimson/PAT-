#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s )
{
	
	int i,n = 0;;
	for(i=0;t[i];i++)
	{
		n++;
	}
	
	if(n>20)
		for(i=0;t[i];i++){
			s[i] = t[i];
		}
	else if(m>n)
	return 1;
		else
			for(i=m;i<=n;i++)
			{
				s[i-m]=t[i-1];
			}
}
