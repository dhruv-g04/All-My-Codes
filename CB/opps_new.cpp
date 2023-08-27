#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class car
{
private:
public:
    float price;
    string name;
    int modelno;
    const int msp;
    car():msp(99)
    {
    }
    car(string s, int m, int p):msp(99)
    {
        name = s;
        modelno = m;
        price = p;
    }
    // car(car &x)
    // {
    //     name = x.name;
    //     price = x.price;
    //     modelno = 111;
    // }
    void set_data(string s, int m, int p)
    {
        name = s;
        modelno = m;
        price = p;
    }
    void get_data()
    {
        cout << name << " " << modelno << " " << price << endl;
    }
    void have_discount(float x)
    {
        price = price * (100.0 - x) / 100.0;
    }
    ~car(){
        cout<<"Inside Destructor "<<name<<endl;
    ////only for Dynamic allocated memory
        // if (name!=NULL){
        //     delete [] name;
        // }
    }
    car(car &x)
    {
        price = x.price;
        modelno = x.modelno;
        name = x.name;
    }
    void operator=(car &x)
    {
        // cout<<" me \n"
        price = x.price;
        modelno = x.modelno;
        name = x.name;
    }
};

int main()
{
    string name;
    int model;
    float pri, x;
    cin >> name >> model >> pri >> x;
    //static car object
    car a(name, model, pri);
    // a.set_data(name,model,pri);
    // a.have_discount(x);
    //Dynamic car object
    car *c=new car("Jaguar",103,200);
    c->get_data();
    car b;
    b = a;
    b.name = "AMW";
    a.get_data();
    b.get_data();
    delete c;  
    return 0;
}