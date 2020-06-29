#include<iostream>

using namespace std;

int main()
{
	string str1, str2;
	char num1, num2;
	cin>>str1>>num1>>str2>>num2;
	int n1 = 0, n2 = 0;
	for(int i = 0;i < str1.length();i++){
		if(str1[i] == num1)
			n1 = n1*10 + (num1 - '0');
	}
	for(int i = 0;i < str2.length();i++){
		if(str2[i] == num2)
			n2 = n2*10 + (num2 - '0');
	}
	cout<<n1+n2;
	
	return 0;
} 
