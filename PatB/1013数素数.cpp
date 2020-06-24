#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0)
		return false;
	}
	return true;
}
int main()
{
	int m, n;
	cin>>m>>n;
	int cnt = 0;
	int num = 2;
	vector<int> v; 
	while(cnt<n){
		if(isPrime(num)){
			cnt++;
			if(cnt>=m){
				v.push_back(num);
				
			}
			
		}
		num++;
	}
	int sum = 0;
	for(int i=0;i<v.size();i++){
		sum++;
		if(sum % 10 != 1)
		cout<<" ";
		cout<<v[i];
		if(sum % 10 == 0)
		cout<<endl;
	}
	
	return 0;
}
