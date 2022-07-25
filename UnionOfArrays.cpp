// #include<bits/stdc++.h>
// using namespace std;

// void union1(int a[],int b[],int n,int m){
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(a[i]<b[j]){
//             cout<<a[i++]<<" ";
        
//         }else if(b[j]<a[i]){
//             cout<<b[j++]<<" ";
//         }else{
//             cout<<b[j++]<<" ";
//             i++;
//         }
//     }

//         while(i<n){
//             cout<<a[i++]<<" ";
//         }
//         while(j<m){
//             cout<<b[j++]<<" ";
//         }
    
// }

// int main(){
//     int n,m;
//     cin>>n;
//     cin>>m;

//     int a[n];

//     // int *a = new int[n];
//     cout<<"enter elements of first array ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     // int *b = new int[m];
//     int b[m];
//     cout<<"enter elements of second array ";
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     sort(a,a+n);
//     sort(b,b+m);
//     union1(a,b,n,m);
//     return 0;


// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printUnion(int arr1[],int arr2[],int m,int n){
    int i=0;
    int j=0;
    vector<int> v;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
        v.push_back(arr1[i++]);
        }
        else if(arr2[j]<arr1[i]){
        v.push_back(arr2[j++]);
        }
    
    else{
        v.push_back(arr2[j++]);
        i++;
    }
    }
    while(i<m){
        v.push_back(arr1[i++]);
    }
    while(j<n){
        v.push_back(arr2[j++]);
    }

    set<int> s;
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
    }
    for(auto i=s.begin();i!=s.end();++i){
        cout<<*i<<" ";
        
    }
}
int main(){
  //  int arr2[]={2,3,4,5};
  //  int arr1[]={1,2,4,5,6,7};
  int arr2[]={3,3,4,5};
  int arr1[]={4,4,5,5,6};
    
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
  sort(arr1,arr1+m);
   sort(arr2,arr2+n);
    for(int i=0;i<m;i++){
        cout<<arr1[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
    cout<<endl;
    printUnion(arr1,arr2,m,n);
    return 0;
}