#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i=0;
	for (i;i<n;i++){
		for(int j =i+1; j<n;j++ ){
			if ((j*j)+(i*i)==n*n){
				cout<<i<<" "<<j<<" ";
			}
		} 
	}
	i=n;
	int j =i+1;
	while (((j*j)-(i*i)<=n*n)){
		while (((j*j)-(i*i)<=n*n)){
			if ((j*j)-(i*i)==n*n){
				cout<<i<<" "<<j;
				break;
			}
			// else{
			// 	cout<<i<<"&"<<j<<" ";
			// }
			j++;
		} 
		i++;
	}
	return 0;
}