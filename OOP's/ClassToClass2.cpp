#include<iostream>
using namespace std;

class Complex;
class Rectangle{
    int l,b;
    public:

    Rectangle(Complex c){
        l=c.getReal();
        b=c.getImg();
    }

    Rectangle(int l,int b){
        this->l = l;
        this->b = b;
    }

    void print(){
        cout<<"lenght of rectangle is "<<l<<" breadth is "<<b;
    }
};
class Complex{
    int real,img;

    public:
    Complex(int r,int i){
        real=r;
        img=i;
    }

    int getReal(){
        return real;
    }

    int getImg(){
        return img;
    }

    void display(){
        cout<<"My number is :"<<real<<"+"<<img<<"i"<<endl;
    }

    // source class m operator function and operator function don;t need return type 

        // operator Rectangle(){
        //     Rectangle temp(real,img);
        //     return temp;
        // }
};



int main()
{
    Complex A(2,3);
   Rectangle B = A; // A.operator rectangle()
    A.display();
    B.print();

    return 0;
}