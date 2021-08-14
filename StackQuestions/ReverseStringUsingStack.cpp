#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	stack<char>s;
	int n=str.length();
	for(int i=0; i<n; i++){
		s.push(str[i]);
	}
	str="";
	for(int i=0; i<n; i++){
		str+=s.top();
		s.pop();
	}
	return str;
}



int main()
{
	// std::cout << "Hello, World" << std::endl;
	string str="HelloMyWorld";
	str=reverseString(str);
	cout<<str<<endl;
	return 0;
}
