#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[6]={2,3,5,7,8,9};
    sort(x,x+4,greater<int>());
    for(int i=0;i<6;i++){
        cout<<x[i]<<" ";
    }
    return 0;
}