/*
Problem : Given linked list Your task to find middle element : : 

    
    ip : 10->20->30->40->NULL;
       element =27;
       
    op : 30; 
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
/*
void printMiddle(Node *head){
	if(head==NULL) return;
	int count=0;
	Node *curr;
	for(curr=head; curr!=NULL; curr=curr->next){
		count++;
	}
	curr=head;
	for(int i=0; i<count/2; i++){
		curr=curr->next;
	}
	cout<<curr->data<<" "<<endl;
}
*/

//print middle node of linked list;
void printMiddle(Node *head){
	if(head==NULL) return;
	Node *slow=head, *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	cout<<slow->data<<endl;
}



void printList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}

int main()
{
	// std::cout << "Hello, World" << std::endl;
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printList(head);
	printMiddle(head);
	
	return 0;
}
