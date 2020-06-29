#include<iostream>

using namespace std;

int main()
{
	string A;
	int	B, t = 0, temp = 0;
	cin >> A >> B;
	int len = A.length();
	t = (A[0] - '0') / B;
	if((t != 0 && len > 1)|| len == 1)
		cout << t;
	temp = (A[0] - '0') % B;
	for(int i = 1; i < len;i++){
		t = (temp * 10 + A[i] - '0') / B;
		cout << t;
		temp = (temp * 10 + A[i] - '0') % B;
	}
	cout << " " << temp;
	return 0;
}
