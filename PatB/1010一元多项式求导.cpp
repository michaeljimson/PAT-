#include<iostream>

using namespace std;
int a[1000][2];

int main()
{
	int n = 0, flag = 0;
	while(cin>>a[n][0]>>a[n][1])
		{
			if(a[n][1] > 0 ){
				if(flag == 1)
				cout<<" ";
			a[n][0] *= a[n][1];
			a[n][1]--;
			cout<<a[n][0]<<" "<<a[n][1];
			flag = 1;
			}
			
			n++;
		}
		if(flag==0)
		cout<<"0 0";
	
	return 0;
}
