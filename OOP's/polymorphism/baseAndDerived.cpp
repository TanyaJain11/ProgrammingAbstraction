#include <bits/stdc++.h>
using namespace std;
class Base{
public:
    void display(){
        cout<<"Base function"<<endl;
    }
};

class Derived:public Base{
public:
    void display(){
        cout<<"Derived Function"<<endl;
    }
};

int main(){
     Base Base1;
     Base1.display();
     Derived derived1;
     derived1.display();
     Base* baseptr=&Base1;
     Derived* derivedptr=&derived1;
     baseptr->display();
     derivedptr->display();

     Base* baseptr2=&derived1;
     baseptr2->display();
        return 0;
}