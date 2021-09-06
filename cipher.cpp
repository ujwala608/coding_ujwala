#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void linearsearch()
{
	int a[10],n,key,flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"KEY"<<endl;
	cin>>key;
	int i=0;
	for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
				flag=1;
				break;
			}
		}
	if(flag==1)
		cout<<"ELEMENT FOUND AT"<<i<<endl;
	else
		cout<<"ELEMENT NOT FOUND"<<endl;
}
void minMax()
{
	int a[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}

	}
	cout<<"MAX:"<<max<<endl;
	cout<<"MIN:"<<min<<endl;


}
void secondLarge()
{
	int a[10],n;
		cin>>n;
		int large=INT_MIN;
		int slarge=INT_MIN;

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{

			if(a[i]>large)
			{
				slarge=large;
				large=a[i];
			}
			else if(a[i]>slarge&&a[i]<large)
			{
				slarge=a[i];

			}
		}
		cout<<"SECOND LARGE "<<slarge;

}
void reverse()
{

	int a[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}

}
void subArray()
{
	int a[10],n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	for(int s=0;s<n;s++)
	{
		for(int e=s;e<n;e++)
		{
			for(int k=s;k<=e;k++)
			{
				cout<<a[k];
			}
			cout<<endl;
		}
		cout<<endl;
	}

}
int subArrayMaxSum(int a[],int n)
{
	int cs=0;
	int ms=a[0];
	for(int i=0;i<n;i++)
	{
		cs=cs+a[i];
		if(cs>ms)
		{
			ms=cs;
		}
		if(cs<0)
		{
			cs=0;
		}

	}
	return ms;

}
int subArrayMinSum(int a[],int n)
{
		int cs=0;
		int mis=a[0];
		for(int i=0;i<n;i++)
		{
			cs=cs+a[i];
			if(cs<mis)
			{
				mis=cs;
			}
			if(cs>0)
			{
				cs=0;
			}
		}
		return mis;
}
int arraySum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];

	}
	return sum;
}
int arrayNagative(int a[],int n)
{
	int flag=1,ls=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{

			flag=0;

			break;
		}
			ls=max(ls,a[i]);
	}
	if(flag)
		return ls;
	else
		return 0;
}
void azero(int a[],int n)
{
	int y=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			continue;
		}
		else
		{
			swap(a[i],a[y]);
			y++;
		}
	}
  for(int i=0;i<n;i++)
  {
	  cout<<a[i]<<" ";
  }

}
void binarysearch(int a[],int n)
{
	int key;
	cin>>key;
	int i=0,j=n;
	while(i<=j)
	{
	int d=(i+j)/2;
	if(key==a[d])
	{
		cout<<"key found at "<<d;
		break;
	}
	else if(key<a[d])
	{
		j=d-1;

	}
	else if(key>a[d])
	{
		i=d+1;

	}
	}
	cout<<"key not found";
}
int main()
{
	linearsearch();
	//minMax();
	//secondLarge();
	//reverse();
	//subArray();
	/*int a[10],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int r=arrayNagative(a,n);
	cout<<r;
	int m=subArrayMaxSum(a,n);
	int n=subArrayMinSum(a,n);
	int sum=arraySum(a,n);
	int x=sum-n;
	int cmaxsum=max(m,x);
	cout<<cmaxsum;*/
	//azero(a,n);
	//binarysearch(a,n);

}
