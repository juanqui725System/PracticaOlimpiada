#include<iostream>
using namespace std;

int main()
{
	int n,a,b,res[100];
	char signo;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>signo>>b;
		if(signo=='+')
		{
			res[i]=a+b;
			
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<res[i]<<endl;
	}	
}
