#include<iostream>
using namespace std;

int x;

void Q(int z){
    z=z+x;
    cout<<z;
}

void P(int *y){
    int x = *y+2;
    Q(x);
    *y=x-1;
    cout<<x;
}


main(){
    x=5;
    P(&x);
    cout<<x;

}