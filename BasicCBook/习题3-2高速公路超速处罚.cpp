#include<stdio.h>

int main(void)
{
	int v,limit_v;
    int dv;
    double per;
 
    scanf("%d %d",&v,&limit_v);
    dv=v-limit_v;
    per=dv*100.0/limit_v;
    if(per<10) printf("OK\n");
    else if(per>=10 && per<50) printf("Exceed %.lf%%. Ticket 200\n",per);
    else printf("Exceed %.lf%%. License Revoked\n",per);
    return 0;

}
