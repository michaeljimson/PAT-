#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct mooncake{
	double mount, price, unit;
};

bool cmp(mooncake a, mooncake b){
	return a.unit > b.unit;
}
int main()
{
	int N, D;
	cin >> N >> D;
	vector<mooncake> a(N);
	for(int i = 0; i < N; i++)
		scanf("%lf", &a[i].mount);
	for(int i = 0; i < N; i++)
		scanf("%lf", &a[i].price);
	for(int i = 0; i < N; i++)
		a[i].unit = a[i].price / a[i].mount;
	sort(a.begin(), a.end(), cmp);
	double result = 0.0;
	for(int i = 0; i < N; i++){
		if(a[i].mount <= D){
			result += a[i].price;
		} else {
			result += a[i].unit * D;
			break;
		}
		D -= a[i].mount;
	}
	
	printf("%.2f", result);
	return 0; 
} 
