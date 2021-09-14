/*
Problem : Given linked list: Insert node at Given position in singly linked list:
          ip : 10-> 5 -> 20 -> 15->NULL
              pos=2; x=55
        
          op : 10->55->5 -> 20 ->15->NULL
          
          let's see the implementation:)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
	
};

//Insert at Given position :
Node *InsertAtGivenPos(Node *head, int pos, int x){
	Node *temp=new Node(x);
	if(pos==1){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	//Important condition for (for loop) : 
	for(int i=1; i<=pos-2 && curr!=NULL; i++){
		curr=curr->next;
	}
	if(curr==NULL){
		return head;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}

//Delete last node in singly linked list:
Node *deleteLastNode(Node *head){
	if(head==NULL) return head;
	if(head->next==NULL) {
		delete(head);
		return NULL;
	}
	Node *curr=head;
	while(curr->next->next!=NULL){
		curr=curr->next;
	}
	delete(curr->next);
	curr->next=NULL;
	return head;
}

//Delete first node in singly linked list:
Node *deleteFirstNode(Node *head){
	if(head==NULL) return NULL;
	Node *temp=head->next;
	delete(head);
	return temp;
}

//Insert at End of singly linked list:
Node *InsetAtEnd(Node *head, int x){
	Node *temp=new Node(x);
	if(head==NULL) return temp;
	if(head->next==NULL) {
		head->next=temp;
		return head;
	}
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	return head;
}

//Insert at beginning of singly linked list:
Node *InsertatBeginning(Node *head, int x){
	Node *temp=new Node(x); //create new node for Given value:
	temp->next=head;  // temp->next link should be pointed twords head;
	
	return temp;     // finally return the new head as a temp;
}

void printList(Node *head){
	if(head==NULL) return;
	if(head!=NULL){
		cout<<head->data<<" ";
	}
	return printList(head->next);
}

//Search in linked list return the position of the elements.:
int search(Node *head, int key){
	Node *curr=head;
	int pos=1;
	while(curr!=NULL){
		if(curr->data==key){
			return pos;
		}
		else{
			pos++;
			curr=curr->next;
			
		}
	}
	return -1;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(15);
	head->next->next->next=new Node(35);
	printList(head);
	cout<<endl;
	cout<<search(head, 15)<<endl;
	head=InsertatBeginning(head, 3);
	printList(head);
	cout<<endl;
	head=InsetAtEnd(head, 5);
	printList(head);
	cout<<endl;
	head=deleteFirstNode(head);
	printList(head);
	cout<<endl;
	head=deleteLastNode(head);
	printList(head);
	cout<<endl;
	head=InsertAtGivenPos(head, 2, 67);
	printList(head);
	return 0;
}
