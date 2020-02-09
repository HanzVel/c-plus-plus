#include<iostream>
using namespace std;
int main()
{
	float f[10];
	int i=9;
	do
	{
		cout<<"Enter"<<i<<"Number:\t";
		cin>>f[i];
		i--;
	}
	while(i>=0);
	cout<<"\n\n";
	i=0;
	do
	{
		if(i%2!=0)
		{
			cout<<f[i]<<"\t";	
		}	
		i++;
	}	
	while(i<=9);

}
