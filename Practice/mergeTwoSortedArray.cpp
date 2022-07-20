#include<iostream>
using namespace std;

void merge(int *arr,int *arr2,int n,int m){
    int a[n+m];
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr[i]<arr2[j]){
            a[k++]=arr[i];
            i++;
        }else{
            a[k++]=arr2[j];
            j++;
        }
    }

     while(i<n){
        a[k++]=arr[i++];
    }

    while(j<m){
        a[k++]=arr2[j++];
    }

    for(int i=0;i<n+m;i++){
        cout<<a[i];
    }
}
int main()
{

    int n;
    int m;
    cin>>n;
    cin>>m;

    int *arr = new int[n];
    int *arr2 = new int[m];

    cout<<"enter elements of first array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements of second array"<<endl;

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    merge(arr,arr2,n,m);
    return 0;
}