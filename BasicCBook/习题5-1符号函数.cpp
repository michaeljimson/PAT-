#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int sign(int x){
	if(x>0)
		return 1;
	else if(x<0)
		return -1;
	else return 0;
}
