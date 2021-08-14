#include<bits/stdc++.h>
using namespace std;

// Brute forse  Time ;: O(n^2) space : O(1);
vector<int> stockSpan(vector<int> &arr){
	int n=arr.size();
	vector<int>res;
	for(int i=0; i<n; i++){
		int span=1;
		for(int j=i-1; j>=0; j--){
			if(arr[j]<=arr[i]) span++;
		}
		res.push_back(span);
	}
	return res;
}

//optimal solution : time O(n) space : O(n);

vector<int> stockSpanO(vector<int> &arr){
	vector<int>v;
	stack<int>s;
	s.push(0);
	v.push_back(1);
	for(int i=1; i<arr.size(); i++){
		while(s.empty()==false && arr[s.top()]<=arr[i]) s.pop();
		
		int span = (s.empty())?i+1 : i-s.top();
		v.push_back(span);
		s.push(i);
	}
	return v;
}

int main(){
	vector<int>v={15,13,12,14,16};
	vector<int>vect=stockSpanO(v);
	for(auto it : vect){
		cout<<it<<" ";
	}
	return 0;
}
