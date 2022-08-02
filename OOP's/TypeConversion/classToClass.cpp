#include<iostream>
using namespace std;
class Triangle{
    int base,height;
    public:

    Triangle(int x,int y){
        base=x;
        height=y;

    }
    void print(){
        cout<<"base is:"<<base<<"and height is:"<<height<<endl;
    }

    int getBase(){
        return base;
    }

    int getHt(){
        return height;
    }
};
class rectangle{
    int l,b;

    public:

    rectangle(int l,int b){
        this->l=l;
        this->b=b;
    }

    void display(){
        cout<<"length is "<<l<<" breadth is "<<b;

    }

    rectangle(Triangle t){
        b = t.getBase();
        l=t.getHt();
    }


};


int main()
{

    Triangle T(5,10);

    rectangle R=T;
    T.print();

    R.display();
    return 0;

    return 0;
}