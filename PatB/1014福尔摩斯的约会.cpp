#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	string s1, s2, s3, s4;
	char t[2];
	string DAY[7]={"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	cin>>s1>>s2>>s3>>s4;
	
	int n = 0;
	while(s1[n]){
		if(s1[n]>='A'&&s1[n]<='G'){
			if(s1[n] == s2[n])
			{
				t[0] = s1[n];
				break;
			}
		}
		n++;
	}
	n+=1;
	while(s1[n]){
		if(s1[n]>='A'&&s1[n]<='N'){
			if(s1[n] == s2[n]|| isdigit(a[i]))//a[i]>='0'&&a[i]<='9'
			{
				t[1] = s1[n];
				break; 
			}
		}
		n++;
	}
	//cout<<t[0]<<" "<<t[1];
	int i = 0;
	while(s3[i]){
		if(s3[i]==s4[i]&&(s3[i]>='A'&&s3[i]<='Z'||s3[i]>='a'&&s3[i]<='z')){
			break;
		}
		i++;
	}
	int weekday = t[0] - 'A';
	int hour;
	if(t[1]>='0'&&t[1]<='9'){
		hour = t[1] - '0';
	}else{
		hour = t[1] - 'A' + 10;
	}
	cout<<DAY[weekday]<<" "; 
	printf("%02d:%02d",hour,i);
	
	return 0;
} 
