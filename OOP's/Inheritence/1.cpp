#include<iostream>
using namespace std;

class university{
    protected:
    int id;
    string name;

    public:

    university(){
    }

    void display(){

        if(id==1747){
            cout<<"Tanya"<<endl;
        }else if(id==1991){
            cout<<"Parul"<<endl;
        }else{
            cout <<" is having id "<<id;
         }
       
    }
};

class student:public university{
    int semester;
    string branch;

    public:

     student(int id){
        this->id=id;
        // this->name=name;
    }


    void print(){
        if(id==1747){
            semester=5;
            cout<<"Tanya is student of "<<semester<<" semester"; 
        }else if(id==1991){
            semester=5;
            cout<<"Parul is student of "<<semester<<" semester"; 
        }else{
            cout<<"no student of this id exists";
        }
    }

     
};
int main()
{

   student s1(1991);
    s1.display();
    s1.print();

    return 0;
}