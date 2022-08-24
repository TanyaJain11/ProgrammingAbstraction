#include<iostream>
using namespace std;
template <class T,class T2>    
 // can give defalut value as <class T=int , class T2=double
class ABC{
    public:
    T data1;
    T2 data2;

    ABC(T a,T2 b){
        data1=a;
        data2=b;
    }

    void display();
        // cout<<data1<<endl;
        // cout<<data2;
    

};
//can define memeber function outside also in template
template <class T,class T2>    
void ABC<T,T2>:: display(){
        cout<<data1<<endl;
        cout<<data2;
    
}
int main()
{
    ABC<int ,double> A(2,2.3);
    A.display();
    return 0;

    return 0;
}