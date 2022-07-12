#include<iostream>
using namespace std;

int main(){
    int i=25,j=30;
    int *p,*q;
    p=&i;
    q=p;
    cout<<i<<j<<*p<<*q;
    *q=35;
    cout<<i<<j<<*p<<*q;
}