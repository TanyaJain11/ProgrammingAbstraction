#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

     int s=0,e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}