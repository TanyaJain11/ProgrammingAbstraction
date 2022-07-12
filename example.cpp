#include<iostream>
using namespace std;

void abc(){
    int a;
    static int s=5;
    a=++s;
    cout<<a<<s;

    if(a<=8){
        abc();
    }
      cout<<a<<s;
}

int main(){
    abc();
    abc();
}