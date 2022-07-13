#include<iostream>
using namespace std;


    /*
        *
      *   *
    *   *   * 
  *   *   *    *
  */

int main(){

    int n;
    cin>>n;
  for(int i=1;i<=n;i++){
   for(int j=1;j<=n-i;j++){
    cout<<" ";
   }
   for(int k=1;k<=i;k++){
    if(k%2!=0){
        cout<<"*";
    }else{
        cout<<" ";
    }
   }

for(int m=i;m>=1;m--){
    if(m%2!=0){
        cout<<" ";
    }else{
        cout<<"*";
    }
}
cout<<endl;
  }

  



 










}