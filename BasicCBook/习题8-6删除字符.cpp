#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar( char *str, char c )
{	
	int i, j, temp = 1;
	for(i=MAXN-1;i>=0;i--){
		if(str[i]==c){
			for(j=i;j<MAXN-temp;j++){
				str[j]=str[j+1];
			}
			temp++;
		}
	}
} 

