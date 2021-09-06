#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=0,dist=10;
	cin>>n;
	char c='r';
	while(n)
	{

		switch(c)
		{
			case 'r':
				x=x+dist;
				dist=dist+10;
				c='u';
				break;
			case 'u':
				y=y+dist;
				dist=dist+10;
				c='l';
				break;
			case'l':
				x=x-dist;
				dist=dist+10;
				c='d';
				break;
			case 'd':
				y=y-dist;
				dist=dist+10;
				c='a';
				break;
			case'a':
				x=x+dist;
				dist=dist+10;
				c='r';
				break;
		}
		n--;
	}
	cout<<x<<" "<<y;
}
