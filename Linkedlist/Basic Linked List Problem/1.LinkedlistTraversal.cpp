/*  Linked List : The idea is to drop the contiguous memory requirements, so that insertion, and deletion can efficient happen at the middle also.
    and no need to pre-allocate the extra space.
*/
#include <bits/stdc++.h>
using namespace std;

//Linked List Implementation:
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

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
	head->next->next=new Node(15);
	head->next->next->next=new Node(35);
	printList(head);
	return 0;
}
