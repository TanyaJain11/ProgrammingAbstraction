#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"enter elements of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"min"<<" "<<min<<endl;
    cout<<"max"<<" "<<max;

    delete[] arr;
    return 0;
}