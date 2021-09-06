#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	int vowc=0,wordc=0,consc=0;
	getline(cin,s);
	cout<<s<<endl;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			vowc++;
		}
		else if(s[i]==' ')
		{
			wordc++;
		}
		else{
			consc++;
		}
	}
	cout<<"vowels:"<<vowc<<endl;
	cout<<"words:"<<wordc+1<<endl;
	cout<<"consent:"<<consc<<endl;

}
