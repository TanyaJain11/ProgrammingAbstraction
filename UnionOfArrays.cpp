#include<bits/stdc++.h>
using namespace std;

void union1(int a[],int b[],int n,int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        
        }else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }else{
            cout<<b[j++]<<" ";
            i++;
        }
    }

        while(i<n){
            cout<<a[i++]<<" ";
        }
        while(j<m){
            cout<<b[j++]<<" ";
        }
    
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;

    int a[n];

    // int *a = new int[n];
    cout<<"enter elements of first array ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int *b = new int[m];
    int b[m];
    cout<<"enter elements of second array ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    union1(a,b,n,m);
    return 0;


}