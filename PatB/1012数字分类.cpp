#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int n, flag=1;
	int n2=0, n4=0;
	int A1=0,A2=0,A3=0,A5=0;
	double A4=0;
	cin>>n;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		switch(temp%5){
			case 0:
				if(temp%2==0)
				 A1+=temp;
				 break;
			case 1:
				if(flag==1)
				A2+=temp;
				else
				A2-=temp;
				flag*=-1;
				n2=1;
				break;
			case 2:
				A3++;
				break;
			case 3:
				A4+=temp;
				n4++;
				break;
			case 4:
				A5=(temp>A5?temp:A5);
				break;
		}
	}
	if(A1==0)
		cout<<'N';
	else
		cout<<A1;
	if(n2==0)
		cout<<" N";
	else
		cout<<" "<<A2;
	if(A3==0)
		cout<<" N";
	else
		cout<<" "<<A3;
	if(A4==0)
		cout<<" N";
	else
		printf(" %.1f", A4/n4);
	if(A5==0)
		cout<<" N";
	else
		cout<<" "<<A5;

}
