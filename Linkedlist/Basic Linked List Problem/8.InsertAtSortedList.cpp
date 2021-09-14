/*
Problem : Given linked list is sorted then you have to insert element into a linked list with its correct position : 
    
    ip : 10->20->30->40->NULL;
       element =27;
       
    op : 10->20->27->30->40->NULL;   
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

Node *insertInSortedList(Node *head, int x){
	Node *temp=new Node(x);
	if(head==NULL) return temp;
	if(head->data>temp->data){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL && curr->next->data<x){
		curr=curr->next;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
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
	head=insertInSortedList(head, 27);
	printList(head);
	
	return 0;
}
