#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int x=0;
	for(int i=0;i<=9;++i)
	{
		cout<<"Enter "<<i<<"Character: \t";
		cin>>a[i];
	}
	for(int i=0;i<=9;++i)
	{
		x=x+a[i];
	}
	x=x/10;
	cout<<"Average of array:\t"<<x<<endl;
	int b[10],y=0,j=0;
	for(int i=0;i<=9;++i)
	{
		if(a[i]>=x)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<=j;++i)
	{
		y=y+b[i];
	}
	y=y/10;
	cout<<"Average of greatest Number: ";
	
}

