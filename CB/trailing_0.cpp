#include <iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;

	while(n!=0){
		n=n/5;
		// int t=n%5
		count+=n;

	} 
	cout<<count;
	return 0;
}