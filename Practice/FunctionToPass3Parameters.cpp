#include<iostream>
using namespace std;

int func(int a,int b,int c){
    return (a+b)*c;
}


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int ans =func(a,b,c);
    cout<<ans;
}