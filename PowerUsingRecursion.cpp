#include<iostream>
using namespace std;
long long int power(int p,int q){
    if(q==0){
        return 1;
    }
    if(q==1){
        return p;
    }
    long long int ans = power(p,q/2) * power(p,q/2);
    if(q%2==0){
        return ans;
    }else{
        return ans*p;
    }
}

int main(){
    int p,q;
    cin>>p;
    cin>>q;

    cout<<power(p,q);
}