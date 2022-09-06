/*

circular linked list ;  last node has address of first
flow in one direction on only
no null poinetr in last node
last ka next head wale ko point karega

*/

#include<bits/stdc++.h>
using namespace std;


class LinkNode{
	
	
	
	public:
		int data;
		LinkNode * next;
		
		LinkNode(){
		}
		LinkNode(int data){
			this->data=data;
			next=NULL;
			
		}
		LinkNode(int d , LinkNode * n) : data(d),next(n){}
};


void Input(){
	
	
	
	
}

void insert(LinkNode* last,int newdata,int Nodeval){
	LinkNode* temp= last->next;

	LinkNode* n = new LinkNode(newdata);
	while(temp->data!=Nodeval){
		temp = temp->next;
		if(temp==last){
			cout<<"Not found";
			return ;
		}
	}
	n->next = temp->next;
	temp->next = n;
}
void display(LinkNode* last){ //agar head argument mein lenge toh ahr fn ke baad head update karna padega but agar last se start karenge toh humesha updated wala se start hoga display hioan 
	
//	LinkNode * temp = head;
//	cout<<head->data<<endl;
//	temp=temp->next;
//	while(temp!=head){
//		cout<<temp->data<<endl;
//		temp = temp->next;
//	}
//	cout<<endl;

LinkNode* temp =last;
do{
temp=temp->next;
cout<<temp->data<<"->";
}
while(temp!=last);
	cout<<endl;
}


void deleteNode(LinkNode* &last,int val){
       LinkNode* prev = last;
	   LinkNode* temp = last;


	   while(temp->data != val){
		   prev = temp;
		   temp=temp->next;
		//    if(temp==last->data){
		// 	cout<<"Nothing deleted";
		// 	return;
		//    }
	   }
	   prev->next = temp->next;
	   
	   delete temp;
}
                                           
void front(LinkNode*& last , int NodeVal){
	
	LinkNode* newn = new LinkNode(NodeVal);
	newn->next = last->next;
	last->next=newn;
 
}

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
	n4->next=head;
	

	
	display(n4);
    front(n4,6);
	display(n4);
	insert(n4,10,2);
	display(n4);
	deleteNode(n4,10);
	display(n4);
	
}