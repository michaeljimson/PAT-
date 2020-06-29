#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t[3][2] = {0};
	int aWin = 0, bWin = 0;
	for(int i = 0; i < n; i++){
		char a, b;
		cin >> a >> b;
		if(a == 'B' && b == 'C'){
			aWin++;
			t[0][0]++; 
		} else if(a == 'B' && b == 'J'){
			bWin++;
			t[2][1]++;
		} else if(a == 'C' && b == 'J'){
			aWin++;
			t[1][0]++;
		} else if(a == 'C' && b == 'B'){
			bWin++;
			t[0][1]++;
		} else if(a == 'J' && b == 'B'){
			aWin++;
			t[2][0]++;
		} else if(a == 'J' && b == 'C'){
			bWin++;
			t[1][1]++;
		}
	}
	for(int i = 0; i < 3; i++){
		cout << t[i][0]<<" "<<t[i][1]<<endl;
	}
	int maxA = -1, maxB = -1;
	int flag1, flag2;
	for(int i = 0; i < 3; i++){
		if(t[i][0]>maxA){
			maxA = t[i][0];
			flag1 = i;
		}
		if(t[i][1]>maxB){
			maxB = t[i][1];
			flag2 = i;
		}
	}
	
	cout << aWin << " " << n - aWin - bWin << " " << bWin << endl; 
	cout << bWin << " " << n - aWin - bWin << " " << aWin << endl;
	if(flag1 == 0){
		cout << 'B' << " ";
	}else if(flag1 == 1){
		cout << 'C' << " ";
	}else if(flag1 == 2){
		cout << 'J' << " ";
	}
	if(flag2 == 0){
		cout << 'B';
	}else if(flag2 == 1){
		cout << 'C';
	}else if(flag2 == 2){
		cout << 'J';
	}
	return 0;
} 
