#include<bits/stdc++.h>
using namespace std;

void cumulative_sum(int n, int a[],int *cum_arr){
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+a[i];
        cum_arr[i]=sum;
    }
    return ;
}

int main(){
    int n=0;
    cin>>n;
    int arr[n];
    int cum_arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cumulative_sum(n,arr,cum_arr);
    for (auto x: cum_arr){
        cout<<x<<" ";
    }
    return 0;
}