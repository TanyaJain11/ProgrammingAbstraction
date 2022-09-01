#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node *next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

};

void front(Node *&head,int d){
    Node *n = new Node(d);
    n->next=head;
    head=n;
}

void atEnd(Node *&head,int d){
    Node *n= new Node(d);

    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insert(Node* &head,int d ,int val){
    Node *n = new Node(d);

    if(val==head->data){
        n->next=head->next;
        head->next=n;
        return;
    }

    Node *temp = head;
    while(temp->data!=val){
        temp = temp->next;
        if(temp==NULL){
            return;
        }
    }

    n->next=temp->next;
    temp->next=n;
}



 void display(Node* n){
        while(n!= NULL){
            cout<<n->data<<" ";
            n=n->next;
        }
        cout<<endl;
    }

int main()
{

    // Node *head;
    // Node *second;
    // Node *third;
    Node *l1=new Node(10);
    Node *l2=new Node(2);


    Node *head=l1;
    head->next=l2;

    display(head);

    front(head,7);
    display(head);

    atEnd(head,30);
    display(head);



    // head->data = 4;
    // head->next=second;

    insert(head,20,10);
    display(head);

    return 0;
}