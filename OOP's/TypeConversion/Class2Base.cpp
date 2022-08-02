#include<iostream>
using namespace std;
class Integer{
    int x;
    public:
    Integer(int x){
        this->x=x;
    }
    void display(){
        cout<<"the number is :"<<x<<endl;
    }
    operator int(){
        return x;
    }
};
int main()
{
    Integer i=10;
    i.display();

    int y =i; //it will give error//i.operator (int)
    cout<<"the value of y is :"<<y;

    return 0;
}