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

void printNthNodefromEnd(Node *head, int n){
	int len=0; 
	for(Node *curr=head; curr!=NULL; curr=curr->next){
		len++;
	}
	if(n>len) return;
	Node *curr=head;
	for(int i=1; i<len-n+1; i++){
		curr=curr->next;
	}
	cout<<curr->data<<" "<<endl;
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
	printNthNodefromEnd(head, 2);
	
	return 0;
}
