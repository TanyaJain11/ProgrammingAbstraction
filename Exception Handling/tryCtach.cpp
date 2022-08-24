#include<iostream>
using namespace std;

class temp{
    public:
    int i;

    void display(){
    try{
        if(i<0){
            throw i;
        }else if(i==0){
            throw 'i';
        }else{
            throw 1.0;
        }
    }
    catch(int i){
        cout<<"negative integer/integer exception";
    }

    catch(char i){
        cout<<"charcter eiception/zero"<<endl;
    }
    catch(...){
        cout<<"Reconsider:::";
    }
    }

// void display(int i){
//     try{
//         if(i<0){
//             throw i;
//         }else if(i==0){
//             throw 'i';
//         }else{
//             throw 1.0;
//         }
//     }
//     catch(int i){
//         cout<<"negative integer/integer eiception";
//     }

//     catch(char i){
//         cout<<"charcter eiception/zero"<<endl;
//     }

    // catch(double i){
    //     cout<<"positive integer/double eiception"<<endl;
    // }

    //isse phele jo catch kiye h vo nahi lera jo aapne throw kiya h means if different data type then this catch will work
    // catch(...){
    //     cout<<"Reconsider:::";
    // }
};

int main(){
    temp i;
    cout<<"enter i"<<endl;
    cin>>i.i;

    i.display();
    return 0;
}