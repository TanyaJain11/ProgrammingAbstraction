#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imaginary;

    public:
    complex(int r,int i){
        real=r;
        imaginary=i;
    }

    void display(){
        cout<<real<<"+"<<"i"<<imaginary<<endl;
    }

    friend void display2(complex a);
};

void display2(complex a){
    cout<<a.real<<"+"<<"i"<<a.imaginary;
}

inline int Max(int x,int y){
    return(x>y)?x:y;
}
int main()
{

complex a(2,3);
a.display();
display2(a);
cout<<endl;
cout<<"max is "<<Max(200,20);
    return 0;
}