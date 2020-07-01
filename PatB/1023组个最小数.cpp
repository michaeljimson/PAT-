#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[10];
	vector<int> v;
	int sum = 0;
	for(int i = 0; i < 10; i++)
		{
		cin >> a[i];
		sum++;
	}
	for(int i = 1; i < 10; i++){
		if(a[i] == 0)
			continue;
		else{
			v.push_back(i);
			a[i]--;
			break;
		}
	} 
	//cout << v[0] << endl;
	for(int i = 0; i < 10; i++){
		while(a[i] > 0){
			v.push_back(i);
			a[i]--;			
		}
		
	}
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
	}
	
	return 0;
}
