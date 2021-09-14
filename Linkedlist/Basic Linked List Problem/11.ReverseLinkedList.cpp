/*
Problem : Given linked list Your task to find  Nth Node from end : 

    
    ip : 10->20->30->40->NULL;
       n=2;
       
       
    op : 30; 
    
    Solution Approach : using length of linked list: :
    (len-n+1)
    for above example : 4-2+1=3 (3rd element from beginning : )
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

Node *reverse(Node *head){
	Node *curr=head;
	Node *prev=NULL;
	while(curr!=NULL){
		Node *next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
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
	head=reverse(head);
	cout<<endl;
	printList(head);
	
	
	return 0;
}
