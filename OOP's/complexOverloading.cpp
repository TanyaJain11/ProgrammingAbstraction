#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;

    public:
     Complex(int r,int img){
        this->real=r;
        this->imaginary=img;
    }

    Complex(){
        real=0;
        imaginary=0;
    }

     Complex operator + (Complex c2)
       {
           Complex temp;
           temp.real = real + c2.real;
           temp.imaginary = imaginary + c2.imaginary;

           return temp;
       }

     Complex operator()(int a,int b,int c,int d)
       {
           Complex temp;
           temp.real = a+b+c;
           temp.imaginary = b+c+d;
           return temp;

           
       }


    void display(){
        cout<<real<<"+"<<"i"<<imaginary<<endl;
    }
};
int main()
{
    Complex A(2,3),B(4,5),D,ans,ans2;

    ans = A+B;
    ans.display();
    ans2 = D(2,3,4,5);
    ans2.display();
    return 0;
}