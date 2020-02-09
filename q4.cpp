#include<iostream>
using namespace std;
int main()
{
	int arr[5000]={0};
	int i=4000,x=1;
	while(i<5000)
	{
		cout<<arr[i]<<" ";
		if(x%10==0)
		{
			cout<<"\n";
		}
		i++;
		x++;
	}
}
