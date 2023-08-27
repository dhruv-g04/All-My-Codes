#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class car
{
private:
    int price;

public:
    int model;
    char name[2];
    void set_data( char *n,int p, int mod)
    {
        price = p;
        // strcpy(name,n);
        for (int i=0;i<(sizeof(n)/sizeof(char));i++){
            name[i]=n[i];
        }
        model = mod;
        return;
    }
    void print(){
        cout<<"name: "<<name;
        cout<<"\nmodel: "<<model;
        cout<<"\nprice: "<<price<<endl;
        return;
    }
};
int main()
{

    car c;
    // c.name[0]='B';
    // c.name[1]='M';
    // c.name[2]='W';
    // c.name[3]='\0';
    
    c.set_data("BMW",200, 101);
    c.print();
}
