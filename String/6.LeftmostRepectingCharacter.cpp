#include <bits/stdc++.h>
using namespace std;

/* Given a string you have to return first ith index of leftmost Repecting characters.
for example : 
ip str : "geeksforgeeks" 
          -       -
op : 0
ip str : "abcd"
op : -1;

Naive solution : use two nested loop O(n^2);

better solution : Use Aux Array to store :  O(n); in this case two traversal is required;

efficient solution : Use Aux Array to store ; O(n); only one traversal is required,

let's see the implementation in order to get better understanding : 
*/


//Naive solution: time O(n^2) space O(1);
int leftmost(string &str){
	for(int i=0; i<str.length(); i++){
		for(int j=i+1; j<str.length(); j++){
			if(str[i]==str[j]){
				return i;
			}
		}
	}
	return -1;
}

//better solution : time O(n) space O(256);  there are two traversal is required to solve the problem.
int leftmostChar(string &str){
	int count[256]={0};
	for(int i=0; i<str.length(); i++){
		count[str[i]]++;
	}
	for(int i=0; i<str.length(); i++){
		if(count[str[i]]>1) return i;
	}
	return -1;
}

//efficient solution : time O(n) space O(256);
int leftmostRepChar(string &str){
	int fIndex[256]={0};
	fill(fIndex, fIndex+256,-1);
	int res=INT_MAX;
	for(int i=0; i<str.length(); i++){
		int fi=fIndex[str[i]];
		if(fi==-1){
			fIndex[str[i]]=i;
		}
		else {
			res=min(res, fi);
		}
	}
	return (res==INT_MAX)?-1: res;
	
	
}
int main()
{
	// std::cout << "Hello, World" << std::endl;
	string s="geeksforgeeks";
	cout<<leftmostRepChar(s)<<endl;
	cout<<leftmostChar(s)<<endl;
	cout<<leftmost(s)<<endl;
	return 0;
}
