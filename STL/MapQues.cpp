#include<iostream>
#include<map>
using namespace std;
int main()
{
    int price;
     map<string,int> car;

     car["A"]=20;
     car["B"]=30;
     car["C"]=40;

     map<string,int>::iterator i;
    for(i =car.begin();i!=car.end();i++){
        if((*i).first == "A"){
            price= 100;
        }else if((*i).first == "B"){
            price=200;
        }else if((*i).first == "C"){
            price=300;
        }
    }

    string model;
    int totalP;
    cout<<"enter car model"<<endl;
    cin>>model;
  

    map<string,int>::iterator it;
    for(it =car.begin();it!=car.end();it++){
        if(model==(*it).first){
            totalP = (*it).second*price;
        }
       
    }

     cout<<"Total price is"<<totalP;

    return 0;
}