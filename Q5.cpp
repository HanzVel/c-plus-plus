#include<iostream>
using namespace std;
int main()
{
	const int v=5000;
	int ar[v]={1},x=5000,y=0;
	for(int i=4999;i>=0;i--)
	{
		ar[i]=x;
		x--;
	}
	for(int i=4999;i>0;i--)
	{
		cout<<ar[i]<<"\t";
		if(y%50==0)
		{
			cout<<"\n";
		}
		y++;
	}
	cout<<"\n"<<"First Element in Array is: "<<ar[0]<<"\n";
	cout<<"Last Element in Array is: "<<ar[4999]<<"\n";
}
