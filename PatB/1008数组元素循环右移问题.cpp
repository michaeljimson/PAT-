#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int m, n;
	cin>>m>>n;
	vector<int> a(m);
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
		n%=m;
	if(n!=0){
		reverse(begin(a),begin(a)+m);
		reverse(begin(a),begin(a)+n);
		reverse(begin(a)+n,begin(a)+m);
	}
	for(int i=0;i<m-1;i++)
		cout<<a[i]<<" ";
	cout<<a[m-1]; 
	
	return 0;
}
