#include<iostream>
using namespace std;

void func(int &a,int &b){
    a++;
    b++;
    cout<<a;
    cout<<b;

}

int main(){
    int x,y;
    cin>>x>>y;

    func(x,y);
    cout<<x;
    cout<<y;
}