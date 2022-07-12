#include<iostream>
using namespace std;

int main(){
    int i=30,j=45;
    int *p,**q;
    p=&i;
    q=&p;
    cout<<i<<*p<<**q;
    **q=25;
    p=&j;
    cout<<i<<*p<<**q;
}