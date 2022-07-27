#include<iostream>
using namespace std;

int f(int *a,int n){
    if(n<=0){
    return 0;
    }
    else if(*a%2==0){
        return *a+f(a+1,n-1);
    }else{
        return *a-f(a+1,n-1);
    }
}

int main(){
    int i;
    int a[6]={12,7,13,4,11,6};
    // int *q;
    // int *p=a;

    // for(i=0;i<5;i++){
    //     cout<<p[i];
    // }

    cout<<f(a,6);
}