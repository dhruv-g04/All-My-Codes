#include<iostream>
using namespace std;

int main(){
    int a[]={5,2,4,1,3};
    for (int i=0 ; i <4; i++){
        int mini=i;
        int mine=a[i];
        for (int j=i+1; j<5;j++){
            if (mine>a[j]){
                mini=j;
                mine=a[j];
            }
        }
        int temp=a[i];
        a[i]=a[mini];
        a[mini]=temp;
    }
    for (auto i: a){
        cout<<i;
    }
    return 0;
}