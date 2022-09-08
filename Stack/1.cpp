#include<iostream>
using namespace std;
#define n 20

class Stack{
    int* arr;
    int top = -1;
    
    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    public:
    void push(int d){
        if(top==n-1){
            cout<<"Stack Overflow\n";
            return;
            }
            top++;
            arr[top] = d;
    }

    void pop(){
            if(top==-1){
                cout<<"stack underflow\n";
                return ;
            }
            top--;
    }

    void Top(){
        if(top==-1){
            cout<<"No element in stack";
        }
            cout<<arr[top];

    }

    bool empty(){
        return top==-1;
    }
};

int main()
{
    Stack s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.Top();
    s.pop();
    return 0;
}