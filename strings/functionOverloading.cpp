#include<iostream>
#include<cstring>

using namespace std;

class displayDate{
    public:
    void display(int i){
        cout<<"displaying integer"<<i<<endl;
    }

    void display(double f){
        cout<<"displaying float f: "<<f<<endl;
    }

    void display(char c){
        cout<<"displaying charchter c:"<<c<<endl;
    }
};


int main(){

    displayDate d;
    d.display(5);
    d.display(10.34);
    d.display('h');
    return 0;

}
