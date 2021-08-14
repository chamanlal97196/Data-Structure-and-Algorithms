#include<bits/stdc++.h>
using namespace std;

bool maching(char a, char b){
	return ((a=='(' && b==')') or (a=='[' and b==']') or (a=='{' and b=='}'));
}

bool balancedParanthesis(string &str){
	stack<char>s;
	for(int i=0; i<str.length(); i++){
		if(str[i]=='(' or str[i]=='{' or str[i]=='['){
			s.push(str[i]);
		}
		else{
			if(s.empty()==true) return false;
			else if(maching(s.top(), str[i])==false) return false;
			else s.pop();
		}
	}
	return (s.empty()==true);
}

int main(){
	string s1="(())(";
	string s2="((()))";
	string s3="{}()";
	string s4=")(";
	cout<<balancedParanthesis(s1)<<endl<<balancedParanthesis(s2)<<endl;
	cout<<balancedParanthesis(s3)<<endl<<balancedParanthesis(s4)<<endl;
	return 0;
}
