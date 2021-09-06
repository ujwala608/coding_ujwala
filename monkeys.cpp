#include<iostream>
using namespace std;
int main()
{

	int n,m,p,k,j,b,pn;
	cin>>n>>m>>p>>k>>j;
	if(n<0||m<0||p<0||k<0||j<0)
	{
		cout<<"INVALIDE INPUT";

	}
	else
	{
		if(k>0)
		{
			 b=k/m;
			 cout<<b;
		}
		if(j>0)
		{
			 pn=j/p;
			 cout<<pn;
		}
		n=n-b-pn;

	cout<<"Number of Monkeys left on the tree:"<<n;
	}
}
