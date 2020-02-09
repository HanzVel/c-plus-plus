#include <iostream>
using namespace std;
int main()
{
   int arr[2][2]={{0,0},{0,0}};

   int i=0;
   do
   {
   	int	j=0;
   		do{
   			cout<<arr[i][j]<<"\t";
      		j++;
		   }
   	while(j<2);
   cout<<"\n";
   i++;
	}
	while(i<2);

   return 0;
}
