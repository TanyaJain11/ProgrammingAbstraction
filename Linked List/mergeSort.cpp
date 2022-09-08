#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void front(Node* &head,int d){
    Node* n= new Node(d);
    n->next=head;
    head=n;
}

void display(Node* n){
    Node* head=n;
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void split(Node* &temp,Node* &first,Node* &second){
    Node* fast=temp->next;
    Node* slow=temp;
    while(fast){
        fast=fast->next;
        if(fast){
            fast=fast->next;
            slow=slow->next;
        }
    }
    first=temp;
    second=slow->next;
    slow->next=NULL;
}

Node* merge(Node* &head1,Node* &head2){
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    Node* res;
    if(head1->data < head2->data){
        res=head1;
        res->next=merge(head1->next,head2);
    }
    else{
        res=head2;
        res->next=merge(head1,head2->next);
    }
    return res;
}

void mergeSort(Node* &head){
    Node* temp=head;
    if(temp==NULL || temp->next==NULL)return;
    Node* first;
    Node* second;
    split(temp,first,second);
    mergeSort(first);
    mergeSort(second);
    head=merge(first,second);
}

int main(){
    Node* head1=new Node(11);
    front(head1,9);
    front(head1,17);
    front(head1,4);
    front(head1,21);
    cout<<"List 1 is : ";
    display(head1);

    Node* head2=new Node(9);
    front(head2,13);
    front(head2,44);
    front(head2,3);
    front(head2,12);
    cout<<"List 2 is : ";
    display(head2);
    mergeSort(head1);
    mergeSort(head2);
    Node* res=merge(head1,head2);
    cout<<"Sorted Linked List is : ";
    display(res);
    return 0;
}