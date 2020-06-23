#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<string> v;
	string temp;
	while(cin>>temp){
		v.push(temp);
	}	
	cout<<v.top();
	v.pop();
	while(!v.empty()){
		cout<<" "<<v.top();
		v.pop();
	}
	return 0;
} 
