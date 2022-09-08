#include<iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

};

void display(Node* top){
    Node* temp = top;
    while(top!=NULL){
        cout<<top->data<<endl;
    }
}

 bool empty(Node* & top){
        if(top == NULL){
            return -1;
        }
    }

    void push(Node* &top,int d){
        if(!empty(top)){
            cout<<"Stack underflow\n";
            return ; 
        }

        Node* n = top;
        top = top->next;
        delete n;

    }

    void top(Node* & top){
        if(empty(top)){
            cout<<"No element in stack\n";
            return;
        }

        cout<<"Top element is\n"<<top->data<<endl;
    }

int main()
{
    Node* top;
    push(top,10);
    push(top,20);

    return 0;
}