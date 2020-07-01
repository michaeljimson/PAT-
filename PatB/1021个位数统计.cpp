#include<iostream>

using namespace std;

int main()
{
	string num;
	cin >> num;
	int a[10] = {0};
	for(int i = 0; i < num.length(); i++){
		int temp = (num[i] - '0') % 10;
		a[temp]++;
	}
	for(int i = 0; i < 10; i++){
		if(a[i] != 0)
		cout << i << ":" << a[i] << endl;
	}
	
	return 0;
}
