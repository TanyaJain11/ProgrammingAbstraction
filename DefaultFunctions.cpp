#include<iostream>
using namespace std;

int add(int a,int b,int c=10,int d=20){
    return a+b+c+d;
}

int main(){
    cout<<add(10,20);
}

