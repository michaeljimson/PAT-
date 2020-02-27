#include<stdio.h>
int check(int m); 

int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d", &m);
		int k=check(m);
		if(k)
			printf("YES\n");
		else
			printf("NO\n");
		}
		return 0;
}
int check(int m)
{
	int a[m][m];
	int flag = 1;
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<m;i++){
		for(int j=0;j<i;j++)
		{
			if(a[i][j]!=0)
			flag=0;
		}
	}
	if(flag==0)
		return 0;
	else
		return 1;
}
