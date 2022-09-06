// #include<iostream>
// using namespace std;

// class Node{

//     public:

//     int data;
//     Node *next;
//     Node* prev;

//     Node(int d){
//         this->data = d;
//         this->next = NULL;
//         this->prev = NULL;
//     }

// };

// void front(Node* &head, int Node_val){
//     Node* n = new Node(Node_val);

//     n->next = head;
//     head->prev = n;
//     head = n;
// }

// void display_rev(Node*last){
// 	while(last==NULL){
// 		cout<<last->data<<"<-";
// 		last=last->prev;
// 	}
// 	// cout<<last->data;
// 	cout<<endl;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){

// Node * l1 = new Node(10);
// Node* l2 = new Node(20);
// Node* head =l1;
// head->next = l2;
// // Node* last = l2;

// front(head,100);
// front(head,200);
// display(head);
// display_rev(l2);
// display(head);
// }


#include<bits/stdc++.h>
using namespace std;


class LinkNode{
	
	
	
	public:
		int data;
		LinkNode * next;
		LinkNode* prev;
		
		LinkNode(){
		}
		LinkNode(int data){
			this->data=data;
			next=NULL;
			prev=NULL;
			
		}
		LinkNode(int d , LinkNode * n,LinkNode* p) : data(d),next(n),prev(p){}
};




void display_st(LinkNode* head){
	
	while(head->next!=NULL){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<head->data;
	cout<<endl;
}

void display_rev(LinkNode*last){
	while(last->prev!=NULL){
		cout<<last->data<<"<-";
		last=last->prev;
	}
	cout<<last->data;
	cout<<endl;
}


// void front(LinkNode*& head , int new_val){
	
// 	LinkNode* newn=new LinkNode(new_val);
// 	LinkNode* temp = head;
	
// 	n
	
	
	
// }

// void front
int main(){
	
	
	LinkNode * head  = new LinkNode(1);
	LinkNode * n1  = new LinkNode(2);
	LinkNode * n2  = new LinkNode(3);
	LinkNode * n3 = new LinkNode(4);
	LinkNode * n4  = new LinkNode(5);
	
	head->next = n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	
	n1->prev = head;
	n2->prev=n1;
	n3->prev = n2;
	n4->prev=n3;
	
	display_st(head);
	display_rev(n4);


	
}