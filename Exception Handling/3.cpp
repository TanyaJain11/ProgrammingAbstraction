#include<iostream>
using namespace std;

class error(int x){
    int err;
    public:
    error(int e){
        err =e;
    }

    void display(){
        cout<<"error code: "<<err<<endl;
    }
}
int main()
{
    int x;
    cout<<"enter number";
    cin>>x;

    try{
        if(x<0){
            throw error(x);
        }else{
            cout<<"input is okay"<<endl;
        }
    }
    catch(error e){
        e.display();
    }
    return 0;
}