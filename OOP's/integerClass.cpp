#include<iostream>
using namespace std;

class integer{
    int x,y;

    public:
    integer(){
        x=10;
        y=5;
        cout<<"constructor called"<<endl;
    }

    void display(){
        cout<<"1st integer is "<<x<<endl;
        cout<<"2nd integer is "<<y<<endl;
    }

    void add(){
        cout<<"add "<<x+y<<endl;
    }

    ~integer(){
        cout<<"destructor is called";
    }
};

int main(){

    integer A;
    A.add();


    return 0;
}