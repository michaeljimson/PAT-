#include<iostream> 
#include<string>
using namespace std;


int main()
{
	int n;
	cin>>n;
	string name[n],number[n];
	int score[n];
	int min = 101 ,max = -1;
	string max_name, max_number, min_name, min_number;
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>number[i]>>score[i];
		if(score[i]>max){
			max_name = name[i];
			max_number = number[i];
			max = score[i];
		}
		if(score[i]<min){
			min_name = name[i];
			min_number = number[i];
			min = score[i];
		}
	}
	
	cout<<max_name<<" "<<max_number<<endl;
	cout<<min_name<<" "<<min_number<<endl;
	
	return 0;
} 
