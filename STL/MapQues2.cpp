#include<iostream>
#include<map>
#include<list>
using namespace std;

class Person{
    public:
    string ,religion,email;
    int age,mobile;
    char gender;name
    Person(string name,char gender,int age,string email){
        this->name=name;
        this->gender=gender;
        this->age=age;
        // this->religion=religion;
        // this->mobile=mobile;
        this->email=email;
    }
    void display(){
        cout<<"Name : "<<name<<" Gender : "<<gender<<" Email Address : "<<email<<endl;
    }
};

int main(){
    list<Person> L;
    map<char,Person> m;
    Person p1("person1",'M',18,"person1@gmail.com");
    m['M']=p1;
    return 0;
}