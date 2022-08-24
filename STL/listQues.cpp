#include<iostream>
#include<list>

using namespace std;

class Student{
    public:
    string First_name;
    int roll_number;

    public:
    Student(string n,int r){
        First_name = n;
        roll_number = r;
    }


};

int main()
{


    Student A("Tanya",1747);
    Student B("parul",1234);
    Student C("pakn",1234);

    list<Student> L;
    L.push_back(A);
    L.push_back(B);
    L.push_back(C);
    int r;
    cout<<"Enter the roll number : ";
    cin>>r;
    list<Student> :: iterator it;
    for(it=L.begin(); it!=L.end(); it++){
        if(it->roll_number==r)cout<<"Name = "<<it->First_name<<endl;
    }

    string na;
    cout<<"Enter the name : ";
    cin>>na;
    for(it=L.begin(); it!=L.end(); it++){
        if(it->First_name==na)cout<<"Roll no. is "<<it->roll_number<<endl;
    }
     

    return 0;
}