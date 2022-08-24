#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try{
        int* ptr=new int[500000000];

    }
    catch(exception& e){
        cout<<e.what()<<"exception occured"<<endl;
    }
    return 0;
}