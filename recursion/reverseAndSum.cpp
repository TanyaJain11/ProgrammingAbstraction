#include<iostream>
using namespace std;

void reverse(int n,int sum){
    if(n==0){
        cout<<endl;
        cout<<sum;
    }
    if(n>0){
    int temp= n;
    int a= temp%10;
    sum+=a;
    cout<<a;
    reverse(temp/10,sum);
    }
}

int main(){
    int n;
    cin>>n;
    int sum=0;
    reverse(n,sum);
}