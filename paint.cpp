#include<iostream>
using namespace std;
int main()
{
	int iw,ew;
	float siw,sew,sumi=0,sume=0;
	cin>>iw;
	cin>>ew;
	for(int i=1;i<=iw;i++)
	{
		cin>>siw;
		sumi=sumi+siw;
	}
	float totali=sumi*18.0;
	for(int i=1;i<=ew;i++)
	{
			cin>>sew;
			sume=sume+sew;
	}
	float totale=sume*12;
	float total=totali+totale;
	cout<<"total estimated cost:"<<total;
}
