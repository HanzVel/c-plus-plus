#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int min;
	const int v=5000;
	int a[v]={1};
	int i=4999;
	while(i>=0)
	{
		a[i]=rand();
		i--;
	}
	i=0;
	min=a[0];
	while(i<5000)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		i++;
	}
	cout<<"MINIMUM NUMBER IN ARRAY IS: \t"<<min<<"\n";
}
