#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=1;
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i=3;i<=n;i++)
	{
		int c;
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;

	}
}
