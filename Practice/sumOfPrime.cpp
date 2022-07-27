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

    int count=0,num=2,sum=0;
    while(count<n){
    if(checkPrime(num,2)){
        sum +=num;
        num++;
        count++;

    }else{
        num++;
    }
    }

   
   cout<<sum;

}

