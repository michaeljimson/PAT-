#include<iostream>
#include<string>

using namespace std;
int main()
{
	string str[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	for(int i=0;i<n;i++)
	{
		char *p = &str[i][0];
		int t1=0,t2=0,t3=0;
    	while(*p=='A')
    		{
    			t1++;
    			p++;
    		}
		if(*p=='\0'||*p!='P')
		{
			cout<<"NO"<<endl;	
		}
		else{
			p++;
			if(*p=='\0'||*p!='A')
			{
			cout<<"NO"<<endl;
			}
			else{
				while(*p=='A'){
					t2++;
					p++;	
				}
				if(*p=='\0'||*p!='T')
				{
					cout<<"NO"<<endl;
				}
				else{
					p++;
					while(*p=='A'){
						t3++;
						p++;
					}
					
					if(*p=='\0'&&(t1*t2==t3))
					cout<<"YES"<<endl;
					else
					cout<<"NO"<<endl; 
				}
			}
		
		}
				
	}
	
	return 0;
}
