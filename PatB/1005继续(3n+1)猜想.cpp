#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[10000];
bool cmp(int a, int b){
	return a > b;
} 

int main()
{
	int n, m, flag=0;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>m;
		v[i]=m;
		while(m!=1)
		{
			if(m%2==1)
				m = m*3+1;
			m/=2;
			if(arr[m]==1)
				break;
			arr[m]=1;
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<v.size();i++)
	{
		if(arr[v[i]]==0){
			if(flag==1)
			  cout<<" ";
			cout<<v[i];
			flag=1;
		}
	}
	
	return 0;
}
