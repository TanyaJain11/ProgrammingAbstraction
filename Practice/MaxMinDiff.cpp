#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int *a=new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int Min= INT_MAX;
    int Max=INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i]>Max){
            Max=a[i];
        }
        if(a[i]<Min){
            Min=a[i];
        }
    }

    cout<<"difference"<<Max-Min;

    delete []a;
    return 0;
}