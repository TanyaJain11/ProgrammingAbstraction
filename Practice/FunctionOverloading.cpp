#include<iostream>
using namespace std;

void add(int x,int y,int z){
    cout<<x+y+z<<endl;
}

void add(int x,int y){
    cout<<x+y<<endl;
}

void add(int x, double y){
    cout<<x+y<<endl;
}

void add(double x,int y){
    cout<<x+y<<endl;
}

int main(){

    add(2,3,4);
    add(1,2);
    add(2,3.2);
    add(3.3,1);

}