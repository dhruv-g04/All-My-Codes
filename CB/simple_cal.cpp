#include<iostream>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	while (ch!='X' && ch!='x'){
		switch (ch){
			int a;
			int b;
		case '+':
			cin>>a>>b;
			cout<<a+b;
			break;
		case '-':
			cin>>a>>b;
			cout<<a-b;
			break;
		case '*':
			cin>>a>>b;
			cout<<a*b;
			break;
		case '/':
			cin>>a>>b;
			cout<<a/b;
			break;
		case '%':
			cin>>a>>b;
			cout<<a%b;
			break;
		default:
			cout<<"Invalid operation. Try again.";
		}
		cin>>ch;
		cout<<endl;

	}
	return 0;
}