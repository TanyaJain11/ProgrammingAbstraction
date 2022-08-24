#include<iostream>
using namespace std;

bool Checkprime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cin>>n;

    for(int i=n-1;i>2;i--){
        if(Checkprime(i) && Checkprime(i-2)){
            cout<<i<<" "<<i-2;
            break;
        }
    }
    return 0;
}