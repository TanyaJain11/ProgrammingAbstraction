#include<iostream>
using namespace std;
int power(int b,int p){
    int mod = 9e+7;
    if(p==0){
        return 1;
    }else{
        return (b*power(b,p-1))%mod;
    }
}
int main()
{
    int b,p;
    cin>>b>>p;

    cout<<power(b,p);
    return 0;
}