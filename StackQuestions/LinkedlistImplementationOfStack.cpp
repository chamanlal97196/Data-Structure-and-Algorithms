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

struct myStack{
	Node *head;
	int sz;
	myStack(){
		head=NULL;
		sz=0;
	}
	
	void push(int x){
		Node *temp=new Node(x);
		temp->next=head;
		head=temp;
		sz++;
	}
	
	int pop(){
		if(head==NULL) return -1;
		int res=head->data;
		Node *temp=head;
		head=head->next;
		delete temp;
		sz--;
		return res;
	}
	int sizeofStack(){
		return sz;
	}
	
	int peek(){
		if(head==NULL) return -1;
		int res= head->data;
		return res;
	}
	
	bool isEmpty(){
		return (head==NULL);
	}
	
};



int main()
{
	// std::cout << "Hello, World" << std::endl;
	myStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.sizeofStack()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.sizeofStack()<<endl;
	cout<<s.peek()<<endl;
	return 0;
}

