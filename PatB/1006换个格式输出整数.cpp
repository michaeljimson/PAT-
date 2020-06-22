#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	int n;
	cin>>n;
	a=n/100;
	n%=100;
	b=n/10;
	n%=10;
	c=n;
	for(int i=0;i<a;i++)
		cout<<'B';
	for(int i=0;i<b;i++)
		cout<<'S';
	for(int i=0;i<c;i++)
		cout<<i+1;
	return 0;
}
