#include<stdio.h>
#define MAXN 100

int main(void)
{
	char opter='0';
	int sum, i,flag=0;
	scanf("%d", &sum);
	while (opter != '=')
	{
		scanf("%c", &opter);
		if (opter == '=')
			break;
		scanf("%d", &i);
		switch (opter)
		{
		case '+':sum = sum + i; break;
		case '-':sum = sum - i; break;
		case '*':sum = sum * i; break;
		case '/':if (i == 0) flag = -1; else sum = sum / i; break;
		default:flag = -1; break;
		}
	}
	if (flag == -1)
		printf("ERROR");
	else
	printf("%d", sum);
	return 0;
}
