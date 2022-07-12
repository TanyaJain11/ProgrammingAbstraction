#include<iostream>
using namespace std;

bool checkPrime(int n,int i){
    if(i>n/2){
        return true ;
    }

      if(n%i==0){
          return false;
    }

      return checkPrime(n,i+1);
}


int main(){
    int n;
    cin>>n;

    bool prime = checkPrime(n,2);
    if(prime == 1){
        cout<<"prime no.";
    }else{
        cout<<"not a prime no.";
    }
}