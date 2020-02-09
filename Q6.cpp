#include<iostream>
using namespace std;
int main()
{
	char a[9],b[9],x=8,pil=0;
	int i=0;
	while(i<9)
	{
		cout<<"Enter "<<i+1<<"Character: \t";
		cin>>a[i];
		i++;
	}
	i=0;
	while(i<9)
	{
		b[x]!=a[i];
		x--;
		i++;
	}
	while(i<9)
	{
		if(a[i]!=b[i])
		{
			pil=1;
		}
		i++;
	}
	if(pil==0)
	{
		cout<<"The Given Array Is A Palindrome";
	}
	else
	{
		cout<<"The Given Array Is Not A Palindrome";
	}
}
