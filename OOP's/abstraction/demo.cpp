// music 
// music device
// music player
// function same display

#include<iostream>
using namespace std;

class music{
    public:
    virtual void print()=0;
    
    };

class musicBase: public music{
    public:
    void print(){
        cout<<"base class";
    }
    void print2(){
        cout<<"kuch bhi likh do";
    }
};

class MusicDevice{
    public:
    void print(){
        cout<<"super base class";
    }
};

int main()
{
       musicBase m;
       m.print();
       

       MusicDevice d;
       d.print();

       music *ptr;
       ptr = &m;

       ptr->print();

       return 0;
}