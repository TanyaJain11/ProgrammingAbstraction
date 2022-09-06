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



void replace(Node*& head,int old,int new1){
			Node* temp= head;
			while(temp->data!=old){
				temp=temp->next;
				if(temp==NULL){
					return;    //matlab woh node mili hii n ahi jisse replace karna hai
				}
			}
			temp->data=new1;
            			
		}


void delete_val(Node* &head,int dat){

    Node* prev = head;
    Node* temp = head;

    if(head->data==dat){
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    while(temp->data!=dat){
        prev=temp;
        temp=temp->next;
    }

    prev->next=temp->next;
    delete temp;
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

    replace(head,20,33);
    display(head);

    delete_val(head,7);
    display(head);

    return 0;
}