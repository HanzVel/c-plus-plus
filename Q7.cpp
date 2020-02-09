#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int temp;
	int a[10]={1};
	int i=10;
	while(i>=0){
		a[i]=rand();
		i--;}
		i=10;
	cout<<"Unsorted Array \n\n";
	while(i>0){
		cout<<a[i]<<"\t";
		i--;}
	cout<<"\n\n\n";
	i=1;
	while(i<10)
	{
		int j=i-1;
		while(j<10)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			j++;
		}
		i++;
	}
	cout<<"Array Elements Sorted in Decending Order: "<<"\n";
	i=10;
	while(i>=0)
	{
		cout<<a[i]<<"\t";
		i--;
	}
}
