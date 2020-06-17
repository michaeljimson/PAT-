#include<iostream>
#include<string>
using namespace std;

int main()
{
	string text[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int n, sum=0;
	string number;
	cin>>number;
	for(int i=0;number[i]!='\0';i++){
		n = number[i]-'0';
		sum+=n;
	}
	
	string sum1=to_string(sum);
	for(int i=0;i<sum1.length();++i){
		if(i!=0)
		cout<<" ";
		cout<<text[sum1[i]-'0'];
	}
	
	return 0;
	
} 
