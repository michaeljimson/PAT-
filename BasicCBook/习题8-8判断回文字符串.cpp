#include <stdio.h>
#include <string.h>

#define MAXN 20


bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s )
{
	int i, j, n;
	n=strlen(s);
	i=0;
	j=n-1;
	while(i+j==n-1&&i<=j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}
