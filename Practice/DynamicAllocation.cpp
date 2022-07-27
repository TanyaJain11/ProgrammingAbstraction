#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"enter array size";
    cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    cout<<"the elements are ";
    for(int i=0;i<n;i++){
        cout<<p[i];
    }
    
    delete[]p;
}