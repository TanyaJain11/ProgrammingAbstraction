#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next = NULL;

    }


};

void insertAtHead(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {

    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

bool Plaindrome_check(Node*&head){
		
		vector<int> v;
		Node*temp=head;
		while(temp!=NULL){
		
			v.push_back(temp->data);
			temp=temp->next;
		}
		
		int n=v.size();
		for(int i=0;i<n;i++){
			
			if(v[i] !=v[n-1-i]){
				return false;
			}
		}
		return true;
		
	}

 void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

 Node* takeInput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=tail->next;
        }cin>>data;
    }
    return head;
}
int main()
{
    int n;
    cout<<"enter element";

     Node *l1 = new Node(10);
    // cout<<l1->data<<endl;
    // cout<<l1->next;
    Node* head=l1;
    Node* tail=l1;  // jab single node hogu vo hi head h and vo hi tail h

    insertAtHead(head,13);
    print(head);

    insertAtTail(tail,12);
    print(head);
    print(tail);

    insertAtPosition(tail,head,2,22);
    print(head);

    insertAtPosition(tail,head,3,221);
    print(head);

    insertAtPosition(tail,head,4,220);
    print(head);

    insertAtTail(tail,120);
    print(head);
    print(tail);

    insertAtPosition(tail,head,6,220);
    print(head);

    print(tail);
    
    return 0;
}