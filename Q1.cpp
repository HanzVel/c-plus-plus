#include <iostream>
using namespace std;
int main(){
	char arr[10];
	for(int i = 1 ; i<=10;i++){
		cout<<"Enter "<<i<<"th Character: \t";
		cin>>arr[i];
	}
	cout<<"\n\n";
	for(int i=10;i>1;i--){
		cout<<arr[i]<<endl;
	}
}
