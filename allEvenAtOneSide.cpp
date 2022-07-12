#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
     int n,i=0,j=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0,e=n-1;
    while(s<e){
        if(arr[s]%2==0){
            s++;
        }
        if(arr[e]%2!=0){
            e--;
        }
        if(arr[s]%2==0 && arr[e]%2!=0){
            s++;
            e--;
        }else if(arr[s]%2==0){
            s++;
        }else if(arr[e]%2!=0){
            e--;
        }else{
            swap(arr[s++],arr[e--]);
        }
    }

    // while(i<n){
    //     while(arr[i]%2==0){
    //         i++;
    //     }
    //       j=i+1;
    //     while(arr[j]%2!=0 && j<n){
    //         j++;
          
    //     }
    //       swap(arr[i],arr[j]);
                 
    // }
    //   i++; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}