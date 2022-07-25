#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersection(int arr1[],int arr2[],int n,int m){
    int i=0,j=0;
    vector<int> v;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            v.push_back(arr2[j++]);
            i++;
        }

    }
    set<int> s;

    for(int i=0;i<v.size();i++){
      s.insert(v[i]);
    }
    for(auto i=s.begin();i!=s.end();++i){
        cout<<*i<<" ";
    }
}
int main()
{
    int arr1[]={3,3,3,3,3};
    int arr2[]={4,5,3,3,7};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    //if you want a sorted array
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    
  intersection(arr1,arr2,n,m);
    return 0;
}