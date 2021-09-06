#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str,s;
	int count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	getline(cin,str);
	if(str=="")
	{
		cout<<"INVALIDE INPUT";
		return 0;
	}
	int l=str.length();
	for(int i=0;i<l;i++)
	{
		if(str[i]=='a')
					count_a++;
		else if(str[i]=='e')
					count_e++;
		else if(str[i]=='i')
					count_i++;
		else if(str[i]=='o')
					count_o++;
		else if(str[i]=='u')
					count_u++;
		else
			s=s+str[i];
	}
		cout<<"a:"<<count_a<<endl;
		cout<<"e:"<<count_e<<endl;
		cout<<"i:"<<count_i<<endl;
		cout<<"o:"<<count_o<<endl;
		cout<<"u:"<<count_u<<endl;
		cout<<s;


}
