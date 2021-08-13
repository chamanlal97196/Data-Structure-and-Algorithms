#include <bits/stdc++.h>
using namespace std;

struct myStack{
	vector<int>v;
	void push(int x){
		v.push_back(x);
	}
	int pop(){
		int res=v.back();
		v.pop_back();
		return res;
	}
	int peek(){
		return v.back();
	}
	int sizeofStack(){
		return v.size();
	}
	bool isEmpty(){
		return v.empty();
	}
	
};

int main()
{
	// std::cout << "Hello, World" << std::endl;
	myStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout<<s.peek()<<endl;
	cout<<s.sizeofStack()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.sizeofStack()<<endl;
	cout<<s.peek()<<endl;
	return 0;
}
