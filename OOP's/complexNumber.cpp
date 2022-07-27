#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int imaginary;

    public:
    void input(){
        cout<<"enter real";
        cin>>real;

        cout<<"enter imaginary";
        cin>>imaginary;
    }

    void display(){
        cout<<real<<"+"<<"i"<<imaginary<<endl;
    }

    complex add(complex B){
        complex r;
         r.real=real+B.real;
         r.imaginary=imaginary+B.imaginary;
         return r;

        // cout<<"sum "<<real1<<"+"<<"i"<<imaginary2<<endl;

    }

    void multiply(complex B){
        real=real*B.real-imaginary*B.imaginary;
        imaginary=real*B.imaginary+B.real*imaginary;
        cout<<"product "<<real<<" "<<imaginary<<"i";
    }
};


int main(){
    complex A;
    complex B;
    complex c;
    A.input();
    A.display();
    B.input();
    B.display();
    c= A.add(B);
    c.display();
    A.multiply(B);




    return 0;
}